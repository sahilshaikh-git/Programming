print("welcome to  Treasure on island Game")
print("You  are mission find out the tresure ")

road = input('''You are at the cross road , Where do you want to go / \n Type "left" or "right'' \n''')

if road == "left" :
       lake = input(''' You've come to the lake , there is island in the middle of the lake \n Type  "wait" to wait for the boat . type "swim" to swim across  ''')

       if lake== "wait":
              door = input(" From Which door you want to enter , Type R for Red , Type Y for yellow or Type  for Blue  ")
              if door == "R":
                     print("You loose")
              elif door == "Y" :
                     print("You win")
              elif door == "B" :
                     print ("You loose")
              else :
                     print("You enter the wrong door")
       else:
              print("Game is over ")
              
else : 
       print("game is over")
