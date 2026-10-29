import art
import random 

print(art)
def play():
       print("Welcome to Number guessing game  ! ")
       print("I am thinking the number between 1 to 100.")
       print("Choose a Difficulty , Type  'easy' or 'hard'  ")



       number  = random.randint(1,100)

       attempt =10
       difficulty = input("choose the Difficulty , Type 'Easy'  or 'Hard'").lower()

       if difficulty =="hard" :
              print(number)
              attempt =10
              while attempt !=0:

                     print(f"You have {attempt} remaining  to guess the  number.")
                     guess = int(input('make the guess ? '))

                     if guess <number :
                            print("too less")
                     elif guss >number:
                            print("too high")
                     else :
                            print("You got it !!")
                            
                     if number == guess :
                            print("You win , Guess is Right ") 
                            break

                     attempt  = attempt -1 
       elif difficulty == "easy" :
              attempt = 5
              while attempt !=0:
              
                     print(f"You have {attempt} remaining  to guess the  number.")
                     guess = int(input('make the guess ? '))
                     if guess <number :
                            print("too less")
                     elif guss >number:
                            print("too high")
                     else :
                            print("You got it !!")
              
                     if number == guess :
                            print("you win") 
                            break
              
                     attempt  = attempt -1 

       else : 
              print("You entered the wrong input....")

playing = input("Do you want the play game , Type 'Y' or 'N").lower()

if playing=="y":
       play()
elif playing== "n":
       print("Thanks for visiting")
else:
       print("You entered wrong options")

