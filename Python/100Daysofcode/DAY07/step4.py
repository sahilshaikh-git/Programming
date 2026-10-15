
import random 
word_list = ["banana" , "apple" , "chikuu"]

stages = [
    # Index 0: Game over
    """
      +---+
      |   |
      O   |
     /|\\  |
     / \\  |
    =========
    """,

    # Index 1
    """
      +---+
      |   |
      O   |
     /|\\  |
     /    |
    =========
    """,

    # Index 2
    """
      +---+
      |   |
      O   |
     /|   |
          |
    =========
    """,

    # Index 3
    """
      +---+
      |   |
      O   |
      |   |
          |
    =========
    """,

    # Index 4
    """
      +---+
      |   |
      O   |
          |
          |
    =========
    """,

    # Index 5: Empty gallows
    """
      +---+
      |   |
          |
          |
          |
    =========
    """
]


#  guess the random choice and print the letter

choice  = random.choice(word_list)
print (choice)


# print the number of dashes like the so how much is dashed



placeholder =""
choice_len = len(choice)
for i in range(choice_len):
       placeholder +="_"

print(placeholder)

guess_letter =  []
check_guess= False


live = 6 
while not check_guess :

       guess = input("Guess the letter : \n").lower()        
          

       predict = ""      

       for i in choice:
              if i ==guess :
                     predict += guess
                     guess_letter.append(guess)
              elif i in guess_letter :
                     predict += i
              else :
                     predict += "_"


       print(predict)
       print(stages[live-1])

       if guess not in choice:
              live -=   1
              if live == 0 :
                     check_guess = True
                     print("you loose")

       if "_" not in predict:
              check_guess = True 
              print("you win")

       



