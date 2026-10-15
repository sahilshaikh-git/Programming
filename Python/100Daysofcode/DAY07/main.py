
import random 
word_list = ["banana" , "apple" , "chikuu"]


#  guess the random choice and print the letter

choice  = random.choice(word_list)
print (choice)

#  Ask user to give the input as  letter  stored in variable guess and make it in lowercase
guess = input("Guess the letter").lower()
print(guess)

#  check guess if the letter is in the word or not

for i in choice:
       if i==guess:
              print("Right")
       else :
              print("wrong")

# print the number of dashes like the