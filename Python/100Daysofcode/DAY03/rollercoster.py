print("Welcome to the Rollercoster ride checking machine.......\n")
print("_____________________________________\n")

height =  int( input("Enter the hright of person"))

if height >120 :
       print("You can ride the rollercoster\n")
       age =  int(input("Enter you age\n"))
       if age <=12 : 
              print("pay 5 $")
       elif age <= 18 :
              print("Pay 7 $")
       else :
              print("pay 10 $")
              
else :
       print("You have grow your height to ride the rollercoaster\n")