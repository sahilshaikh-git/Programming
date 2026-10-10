print("Welcome to the Rollercoster ride checking machine.......\n")
print("_____________________________________\n")

height =  int( input("Enter the hright of person"))
bill = 0

if height >120 :
       print("You can ride the rollercoster\n")
       age =  int(input("Enter you age\n"))
       if age <=12 : 
              bill =5 
              print("pay 5 $")
       elif age <= 18 :
              bill =7
              print("Pay 7 $")
       elif age >= 40 and age <= 55:
              bill = 0
              print("pay 0 $")
       else :
              bill = 12 
              print("pay $ 12")

       want_photo = input("do you want photo if say yor n")

       if want_photo == "y":
              #  add three dollar
              bill += 3 

       print(f"You have to pay : {bill}")
else :
       print("You have grow your height to ride the rollercoaster\n")