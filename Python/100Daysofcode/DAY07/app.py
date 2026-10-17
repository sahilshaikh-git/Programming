
import streamlit as st
import random

from hangman_art import stages
from list_of_word import word_list, logo

st.set_page_config(page_title="Hangman Game", page_icon="🎯")

st.title("🎯 Hangman Game")
st.write("Guess the hidden word, one letter at a time!")

st.text(logo)

# Initialize a new game
if "word" not in st.session_state:
    st.session_state.word = random.choice(word_list)
    st.session_state.guessed_letters = []
    st.session_state.lives = 6
    st.session_state.game_over = False
    st.session_state.won = False

word = st.session_state.word
guessed_letters = st.session_state.guessed_letters

# Display the current hangman stage
st.code(stages[st.session_state.lives - 1])

# Display lives remaining
st.write(f"❤️ Lives remaining: {st.session_state.lives}")

# Show correctly guessed letters and blanks
display_word = " ".join(
    letter if letter in guessed_letters else "_"
    for letter in word
)
st.subheader(display_word)

# Check whether the game has ended
if not st.session_state.game_over:
    with st.form("guess_form"):
        guess = st.text_input(
            "Enter one letter",
            max_chars=1
        ).lower().strip()

        submitted = st.form_submit_button("Guess")

    if submitted:
        if not guess.isalpha() or len(guess) != 1:
            st.warning("Please enter one letter.")
        elif guess in guessed_letters:
            st.warning("You already guessed that letter!")
        else:
            st.session_state.guessed_letters.append(guess)

            if guess not in word:
                st.session_state.lives -= 1

            if all(
                letter in st.session_state.guessed_letters
                for letter in word
            ):
                st.session_state.game_over = True
                st.session_state.won = True
            elif st.session_state.lives == 0:
                st.session_state.game_over = True
                st.session_state.won = False

        st.rerun()

# Display the result
if st.session_state.game_over:
    if st.session_state.won:
        st.success(f"You won! The word was: {word}")
    else:
        st.error(f"Game over! The word was: {word}")

    if st.button("🔄 Play Again"):
        st.session_state.word = random.choice(word_list)
        st.session_state.guessed_letters = []
        st.session_state.lives = 6
        st.session_state.game_over = False
        st.session_state.won = False
        st.rerun()
