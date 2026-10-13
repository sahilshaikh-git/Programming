import random 


print(" Welcome to the ROCK, PAPER, SCISSORS Game made by Sahil!")

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

choose =  int(input("what is your choice ? Type 0 for rock ,1 for paper  , 2 for scissor"))

if choose >2 :
       print("You choose wrong input ")
else :
       random_num =  random.randint(0,2)

       computer =  random_num

       if choose == 0 :
              print(rock)
              print("You choose rock")
       elif  choose ==1 :
              print(paper)
              print("You choose paper")
       else :
              print(scissors)
              print("You choose scissor")


       print("computer :")

       if computer == 0 :
              print(rock)
              print("Computer choose rock")
       elif  computer ==1 :
              print(paper)
              print("Computer choose paper")
       else :
              print(scissors)
              print("Computer choose scissor")



       if choose == computer :
              print("Match  Draw...")
       elif choose == 0 and computer ==2:
              print  ("You win")
       elif choose == 0 and  computer == 1 :
              print(" You loose")
       elif choose == 1 and computer == 0:
              print("You win")
       elif choose == 1 and computer == 2:
              print("You loose")
       elif choose == 2 and computer ==1 :
              print("You win")
       elif choose == 2 and computer == 0:
              print("You Loose")
       else:
              print("You insert wrong choice ")


