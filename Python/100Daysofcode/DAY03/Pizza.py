print("Welcome to the pizza delivary y python")
print("-----------------------------------")

size = input("What is SIze of pizza do you want !  S ,M and L : ")

pepparoni =  input("do you want pepperin on your pizza ? Y or N  : ")
extra_cheeze  =  input ("Do you want extra cheese ? Y or N  :  ")

bill = 0 
if size == "S":
       bill = 15
       if pepparoni == "Y":
              bill += 2
       if extra_cheeze =="Y":
              bill += 1 
       
elif size == "M":
       bill = 20
       if pepparoni == "Y":
                     bill += 3
       if extra_cheeze =="Y":
                     bill += 1 

elif size == "L":
       bill =  25
       if pepparoni == "Y":
                            bill += 3
       if extra_cheeze =="Y":
                            bill += 1

else :
       print ("you put wrong size")

print(f"Your Total bill  is {bill}")