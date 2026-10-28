# Black Jack (Flask)

Your terminal blackjack game as a mobile-friendly web page. The rules run in
Python; the browser only draws the table.

## Run it

```bash
cd blackjack_flask
python -m venv venv
source venv/bin/activate        # Windows: venv\Scripts\activate
pip install -r requirements.txt
python app.py
```

Open http://127.0.0.1:5000. To try it on your phone while on the same Wi-Fi,
change the last line of `app.py` to `app.run(debug=True, host="0.0.0.0")` and
open `http://<your-computer-ip>:5000` on the phone.

## How Python and HTML connect

```
 browser (static/app.js)                      Python (app.py)
 ───────────────────────                      ───────────────
 click "Hit"  ── fetch("/api/hit", POST) ──▶  api_hit(): deal a card, check bust
 draw cards   ◀──────── JSON reply ─────────  serialize(game)
```

- `app.py` holds the game: `deal_card`, `calculate_score`, `compare`, plus the
  routes `/api/state`, `/api/new`, `/api/hit`, `/api/stand`, `/api/reset-record`.
- `templates/index.html` is the page. Flask serves it at `/`.
- `static/app.js` sends a request when you press a button, then redraws the
  table from the JSON that Python sends back.
- `static/style.css` is the felt-table look and the phone layout.
- The dealer's face-down card stays on the server. The browser only receives
  it after you stand or bust, so it can't be peeked at.

## Changes from the terminal version

- A dealer bust now says you win (the old message said "you loose").
- If you and the dealer both get blackjack, it is a push.
- The win/lose/push record is kept per visitor in server memory and resets
  when the server restarts.

## Putting it online

`python app.py` is for development only. To publish it, use a host that runs
Python (PythonAnywhere, Render, Railway), run it with `gunicorn app:app`, and
set `app.secret_key` to a long random value. The in-memory `GAMES` dictionary
works for a small project; use a database or Redis if many people will play.
