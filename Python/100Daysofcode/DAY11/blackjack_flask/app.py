"""Black Jack web app.

All game rules live here in Python. The browser page (templates/index.html +
static/app.js) only shows the table and calls the /api/... routes below.
"""
import random
import uuid

from flask import Flask, jsonify, render_template, session

app = Flask(__name__)
app.secret_key = "change-this-before-you-deploy"  # signs the session cookie

CARDS = [11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10]  # same list as your terminal game
SUITS = ["♠", "♥", "♦", "♣"]

# One game per visitor, kept in server memory (the browser only holds a game id).
# The dealer's hidden card therefore never reaches the browser until it is revealed.
GAMES = {}


# ---------------------------------------------------------------- game rules
def deal_card():
    value = random.choice(CARDS)
    if value in (11, 1):
        rank = "A"
    elif value == 10:
        rank = random.choice(["10", "J", "Q", "K"])
    else:
        rank = str(value)
    return {"value": value, "rank": rank, "suit": random.choice(SUITS)}


def calculate_score(cards):
    """Return total, whether an ace is still counting 11, and whether it is blackjack."""
    total = sum(c["value"] for c in cards)
    is_blackjack = len(cards) == 2 and total == 21
    soft_aces = sum(1 for c in cards if c["value"] == 11)
    while total > 21 and soft_aces:
        total -= 10  # an ace drops from 11 to 1
        soft_aces -= 1
    return {"total": total, "soft": soft_aces > 0 and total <= 21, "blackjack": is_blackjack}


def compare(player, dealer):
    """Return (result kind, message). kind is 'win', 'lose' or 'push'."""
    p, d = calculate_score(player), calculate_score(dealer)
    if p["blackjack"] and d["blackjack"]:
        return "push", "Both have blackjack. Push."
    if p["blackjack"]:
        return "win", "Blackjack. You win."
    if d["blackjack"]:
        return "lose", "Dealer has blackjack."
    if p["total"] > 21:
        return "lose", f"You bust on {p['total']}."
    if d["total"] > 21:
        return "win", f"Dealer busts on {d['total']}. You win."
    if p["total"] > d["total"]:
        return "win", f"You win, {p['total']} to {d['total']}."
    if p["total"] == d["total"]:
        return "push", f"Push. Both on {p['total']}."
    return "lose", f"Dealer wins, {d['total']} to {p['total']}."


def start_round(game):
    game["player"] = [deal_card(), deal_card()]
    game["dealer"] = [deal_card(), deal_card()]
    game["phase"] = "play"
    game["result"] = None
    if calculate_score(game["player"])["blackjack"] or calculate_score(game["dealer"])["blackjack"]:
        finish_round(game)


def finish_round(game):
    kind, message = compare(game["player"], game["dealer"])
    game["phase"] = "over"
    game["result"] = {"kind": kind, "msg": message}
    game["tally"][kind] += 1


def dealer_plays(game):
    while calculate_score(game["dealer"])["total"] < 17:
        game["dealer"].append(deal_card())


# ------------------------------------------------------------------- helpers
def get_game():
    game_id = session.get("game_id")
    if game_id not in GAMES:
        game_id = uuid.uuid4().hex
        session["game_id"] = game_id
        GAMES[game_id] = {"tally": {"win": 0, "lose": 0, "push": 0}}
        start_round(GAMES[game_id])
    return GAMES[game_id]


def serialize(game):
    """Turn the game into JSON for the browser, hiding the dealer's second card while play is on."""
    hole_hidden = game["phase"] == "play"
    if hole_hidden:
        dealer = [game["dealer"][0], {"hidden": True}]
        dealer_score = None
        steps = []
    else:
        dealer = game["dealer"]
        dealer_score = calculate_score(game["dealer"])
        # running score after each dealer card, so the page can show the draws one by one
        steps = [calculate_score(game["dealer"][:n]) for n in range(2, len(game["dealer"]) + 1)]
    return {
        "player": game["player"],
        "dealer": dealer,
        "player_score": calculate_score(game["player"]),
        "dealer_score": dealer_score,
        "dealer_showing": game["dealer"][0]["value"],
        "dealer_steps": steps,
        "hole_hidden": hole_hidden,
        "phase": game["phase"],
        "result": game["result"],
        "tally": game["tally"],
    }


# -------------------------------------------------------------------- routes
@app.route("/")
def home():
    return render_template("index.html")


@app.get("/api/state")
def api_state():
    return jsonify(serialize(get_game()))


@app.post("/api/new")
def api_new():
    game = get_game()
    if game["phase"] == "over":
        start_round(game)
    return jsonify(serialize(game))


@app.post("/api/hit")
def api_hit():
    game = get_game()
    if game["phase"] == "play":
        game["player"].append(deal_card())
        if calculate_score(game["player"])["total"] > 21:
            finish_round(game)
    return jsonify(serialize(game))


@app.post("/api/stand")
def api_stand():
    game = get_game()
    if game["phase"] == "play":
        dealer_plays(game)
        finish_round(game)
    return jsonify(serialize(game))


@app.post("/api/reset-record")
def api_reset_record():
    game = get_game()
    game["tally"] = {"win": 0, "lose": 0, "push": 0}
    return jsonify(serialize(game))


if __name__ == "__main__":
    app.run(debug=True)
