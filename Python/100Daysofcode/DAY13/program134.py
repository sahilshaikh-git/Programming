
try :
       age = int(input("What is your age : "))
except ValueError :
       print("You entered the invalid numerical value , please entered Numerical value such as 15")
       age = int(input("What is your age : "))

if age >=18 :
       print(f"You can go to the trip at the  {age}")