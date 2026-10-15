from hangman_art import stages
from list_of_word import word_list ,logo
import random 

#  guess the random choice and print the letter

print(logo)
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

       print(f"****************************************{live}/6 LIVES LEFT ************************************************************")
       guess = input("Guess the letter : \n").lower()    


       predict = ""  



       if guess in guess_letter :
              print(f"You already predict '{guess}'  so try new word...")


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
              print(f"You guess {guess} , thats not in the word .You loose life")
              if live == 0 :
                     check_guess = True
                     print(f"********************************************correct word {choice} you loose**********************************************************")

       if "_" not in predict:
              check_guess = True 
              print("************************************************you win****************************************************************")

       



