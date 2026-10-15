stages = [
    # Stage 1: 6 lives — Empty gallows
    """
      +---+
      |   |
          |
          |
          |
    =========
    """,

    # Stage 2: 5 lives — Head
    """
      +---+
      |   |
      O   |
          |
          |
    =========
    """,

    # Stage 3: 4 lives — Head and body
    """
      +---+
      |   |
      O   |
      |   |
          |
    =========
    """,

    # Stage 4: 3 lives — One arm
    """
      +---+
      |   |
      O   |
     /|   |
          |
    =========
    """,

    # Stage 5: 2 lives — Two arms and one leg
    """
      +---+
      |   |
      O   |
     /|\\  |
     /    |
    =========
    """,

    # Stage 6: 1 life — Complete hangman
    """
      +---+
      |   |
      O   |
     /|\\  |
     / \\  |
    =========
    """
]

num=  int(input("Enter the Stage ? "))
# Display the first stage
print(stages[num])