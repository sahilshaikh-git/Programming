
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

predict = ""

guess_letter =  []

while predict != choice :

       guess = input("Guess the letter : \n").lower()        
       guess_letter.append(guess)     

       predict = ""      

       for i in choice:
              if i in guess_letter :
                     predict += i
              
              else :
                     predict += "_"


       print(predict)



