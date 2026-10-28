import random 
import art 
logo = r"""
╔══════════════════════════════════════════════════════════╗
║                                                          ║
║      ██████╗ ██╗      █████╗  ██████╗██╗  ██╗           ║
║      ██╔══██╗██║     ██╔══██╗██╔════╝██║ ██╔╝           ║
║      ██████╔╝██║     ███████║██║     █████╔╝            ║
║      ██╔══██╗██║     ██╔══██║██║     ██╔═██╗            ║
║      ██████╔╝███████╗██║  ██║╚██████╗██║  ██╗           ║
║      ╚═════╝ ╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝           ║
║                                                          ║
║   ██╗ █████╗  ██████╗██╗  ██╗     █████╗  ██████╗██╗  ██╗║
║   ██║██╔══██╗██╔════╝██║ ██╔╝    ██╔══██╗██╔════╝██║ ██╔╝║
║   ██║███████║██║     █████╔╝     ███████║██║     █████╔╝ ║
║   ██║██╔══██║██║     ██╔═██╗     ██╔══██║██║     ██╔═██╗ ║
║   ██║██║  ██║╚██████╗██║  ██╗    ██║  ██║╚██████╗██║  ██╗║
║   ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝    ╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝║
║                                                          ║
║             ♠  ┌─────┐       ┌─────┐  ♥                  ║
║                │ A   │       │ K   │                     ║
║                │  ♠  │       │  ♥  │                     ║
║                └─────┘       └─────┘                     ║
║                                                          ║
║                  ♦  BEAT THE DEALER  ♣                   ║
║                                                          ║
╚══════════════════════════════════════════════════════════╝
"""

def Deal_card():
       Cards = [11,1,2,3,4,5,6,7,8,9,10,10,10,10]
       card = random.choice(Cards)
       return card

def compare (u_score , c_score):
       if u_score == 0 :
              return "You got BlackJack , You"
       elif c_score == 0:
              return "Dealer Got BlackJack....."
       elif u_score > 21:
              return " You bust ...YOU lOOSE"
       elif c_score > 21  :
              return "computer bust _ you loose "
       elif u_score > c_score:
              return "You win"
       elif u_score == c_score :
              return "draw"
       else :
              return "you loose , Computer take over you "

def play() :
       print(logo)

       user_card = []
       computer_card = []
       is_game_over = False
       user_score = -1
       computer_score  = -1


       for _ in range(2):
              """add the cards 2 times"""
              user_card.append(Deal_card())
              computer_card.append(Deal_card())

       def calculate_score(cards):
              """take the list of cards and return the sum of cards score  """
              if sum(cards) == 21  and len(cards) == 2  :
                     return 0 

              if sum(cards) > 21 and 11 in cards :
                     cards.remove(11)
                     cards.append(1)

              return sum(cards)

       while not is_game_over :
              user_score = calculate_score(user_card)
              computer_score= calculate_score(computer_card)

              print(f"User cards : {user_card}  Score : {user_score} ")
              print(f"Computer First Cards : {computer_card[0] } ")

              if user_score ==0 or computer_score == 0 or user_score > 21 :
                     is_game_over = True 
              else :
                     user_decision =input("Enter 'Y for next or 'N' for the pass")

                     if user_decision == "Y":
                            user_card.append(Deal_card())
                     else :
                            is_game_over = True 


       while computer_score !=  0 and computer_score < 17 :
              computer_card.append(Deal_card())
              computer_score = calculate_score(computer_card)

       print(f"Your cards {user_card}  your score : {user_score}")
       print(f"Computer cards {computer_card} score : {computer_score}")
       print(compare(user_score, computer_score))


play_again = input("want to play  , Type Y or N") .lower()

if play_again== "y":
       play()
elif play_again =="n" :
       print("Thanks for visiting")
else :
       print("You entered wrong input")





