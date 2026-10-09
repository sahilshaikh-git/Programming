print("Welcome to the Tip Calculator............... ")
print("_________________________")

bill =  float(input("What was the total bill ?"))
tip = int(input("How much tip would you like to give ? 10 , 12 ,15"))

split = int( input("How much people split the bill ?"))


total_bill =  (bill * (tip/100 +1 ))


bill_per_person =  total_bill / split 
x =  round(bill_per_person,2)
print(f"Each person should give : {x:.2f} " )



