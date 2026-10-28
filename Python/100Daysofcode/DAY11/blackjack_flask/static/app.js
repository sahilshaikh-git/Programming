// The browser only draws the table. Every rule (dealing, scoring, dealer play,
// who won) comes from the Python server through the /api/... routes.

const SUIT_NAMES = { "♠": "spades", "♥": "hearts", "♦": "diamonds", "♣": "clubs" };
const RANK_NAMES = { A: "Ace", J: "Jack", Q: "Queen", K: "King" };

const $ = (id) => document.getElementById(id);
const reduceMotion = window.matchMedia("(prefers-reduced-motion: reduce)").matches;
const wait = (ms) => new Promise((r) => setTimeout(r, reduceMotion ? Math.min(ms, 150) : ms));

let busy = false;          // true while a request or the dealer animation is running
let drawn = { p: 0, d: 0 }; // how many cards are already on screen, so only new ones animate
let holeWasHidden = true;

// ---- talking to Python -------------------------------------------------
async function call(path, method = "POST") {
  const res = await fetch(path, { method, headers: { Accept: "application/json" } });
  if (!res.ok) throw new Error("Server returned " + res.status);
  return res.json();
}

// ---- drawing ------------------------------------------------------------
function cardHTML(card, animate, flip) {
  const anim = animate ? " deal" : "";
  if (card.hidden) {
    return `<div class="card back${anim}" role="img" aria-label="Face-down card"></div>`;
  }
  const red = card.suit === "♥" || card.suit === "♦";
  const cls = "card" + (red ? " red" : "") + anim + (flip ? " flip" : "");
  const name = (RANK_NAMES[card.rank] || card.rank) + " of " + SUIT_NAMES[card.suit];
  const corner = `${card.rank}<i>${card.suit}</i>`;
  return `<div class="${cls}" role="img" aria-label="${name}">
    <span class="corner tl">${corner}</span>
    <span class="pip">${card.suit}</span>
    <span class="corner br">${corner}</span></div>`;
}

function scoreHTML(score) {
  if (!score) return "";
  if (score.blackjack) return `21<small>blackjack</small>`;
  if (score.total > 21) return `${score.total}<small>bust</small>`;
  return `${score.total}${score.soft ? "<small>soft</small>" : ""}`;
}

// view = { player, dealer, hole_hidden, player_score, dealer_score, dealer_showing,
//          phase, result, tally }
function render(view) {
  const flipHole = holeWasHidden && !view.hole_hidden;

  $("p-cards").innerHTML = view.player
    .map((c, i) => cardHTML(c, i >= drawn.p, false))
    .join("");
  $("d-cards").innerHTML = view.dealer
    .map((c, i) => cardHTML(c, i >= drawn.d, flipHole && i === 1))
    .join("");
  drawn = { p: view.player.length, d: view.dealer.length };
  holeWasHidden = view.hole_hidden;

  $("p-score").innerHTML = scoreHTML(view.player_score);
  $("d-score").innerHTML = view.hole_hidden
    ? `${view.dealer_showing}<small>showing</small>`
    : scoreHTML(view.dealer_score);

  const over = view.phase === "over";
  $("status-band").className = "status" + (over ? " " + view.result.kind : "");
  $("status").textContent = over
    ? view.result.msg
    : view.phase === "dealer"
    ? "Dealer plays…"
    : "Your move. Hit or stand?";

  $("play-btns").hidden = over;
  $("deal").hidden = !over;
  $("hit").disabled = view.phase !== "play";
  $("stand").disabled = view.phase !== "play";

  $("t-win").textContent = view.tally.win;
  $("t-lose").textContent = view.tally.lose;
  $("t-push").textContent = view.tally.push;
}

function showError(err) {
  console.error(err);
  $("status-band").className = "status lose";
  $("status").textContent = "Can't reach the game server. Is app.py running?";
}

// ---- actions ------------------------------------------------------------
async function run(action) {
  if (busy) return;
  busy = true;
  try {
    await action();
  } catch (err) {
    showError(err);
  } finally {
    busy = false;
  }
}

const load = () => run(async () => render(await call("/api/state", "GET")));

const newRound = () =>
  run(async () => {
    drawn = { p: 0, d: 0 };
    holeWasHidden = true;
    render(await call("/api/new"));
  });

const hit = () => run(async () => render(await call("/api/hit")));

const stand = () =>
  run(async () => {
    const s = await call("/api/stand");
    // Python already played the dealer's whole hand. Replay it one card at a time.
    const steps = s.dealer_steps; // running score after each dealer card
    render({ ...s, dealer: s.dealer.slice(0, 2), dealer_score: steps[0], phase: "dealer" });
    await wait(700);
    for (let n = 3; n <= s.dealer.length; n++) {
      render({ ...s, dealer: s.dealer.slice(0, n), dealer_score: steps[n - 2], phase: "dealer" });
      await wait(800);
    }
    render(s);
  });

const resetRecord = () => run(async () => render(await call("/api/reset-record")));

$("hit").addEventListener("click", hit);
$("stand").addEventListener("click", stand);
$("deal").addEventListener("click", newRound);
$("reset").addEventListener("click", resetRecord);

document.addEventListener("keydown", (e) => {
  if (e.metaKey || e.ctrlKey || e.altKey) return;
  const k = e.key.toLowerCase();
  if (k === "h" && !$("hit").disabled) hit();
  else if (k === "s" && !$("stand").disabled) stand();
  else if (k === "d" && !$("deal").hidden) newRound();
});

load();
