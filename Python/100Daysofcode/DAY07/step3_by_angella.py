
import random 
word_list = ["banana" , "apple" , "chikuu"]


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

       if "_" not in predict:
              check_guess = True 
              print("you win")



