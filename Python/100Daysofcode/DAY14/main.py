import random 
import art

from instagram_data import data 

print(art)

person1 = random.choice(data)
person2 = random.choice(data)


score = 0 
game_over = False

while not game_over :
       print(f" Choice A :  is {person1['name']} is  {person1['category']}  profession")

       print(art.vs)

       print(f" Choice B :  is {person2['name']} is  {person2['category']} profession ")

       guess = input("which is having the higher Followe ,Typr A or B ").upper()
       
       if person1["followers"] > person2["followers"]:
              ans = "A"
       else :
              ans ="B"

       if guess == ans :
              print("Correct")
              score += 1
              person1 = person2


              # taking random data in the person 2
              person2 = random.choice(data)

       else:
              print('Wrong !!')
              game_over = True

              print(f"Game over , You score is {score}")

       
              



       






       
       
