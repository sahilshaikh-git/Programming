import art

def add( num1 , num2) :
       ans = num1 +num2
       print(ans)

def sub(num1 ,num2 ):
       ans = num1 -num2 
       print(ans)

def Mul(num1 , num2):
       ans =num1*num2
       print(ans)

print(art.logo ) 

print("\n")
flag  = True 
while(flag):

       num1 = int(input("What is the first number : "))


       print("+\n")
       print("-\n")
       print("*\n")
       print("/\n")

       option = input("Pick the option : ")
       if option == "+":
              num2 = int(input("Enter the sec number :"))
              add(num1 , num2)
       elif option == "-":
              num2 = int(input("Enter the sec number :"))
              sub(num1 , num2)
       elif option == "*":
              num2 = int(input("Enter the sec number :"))
              Mul(num1 , num2)
       elif option == "/":
              num2 = int(input("Enter the sec number :"))
              Mul(num1 , num2)    
       else :
              print("You put wrong input")

       cont = input("want continue type 'Y' otherwise type 'N'")

       if cont == "N":
              flag = False
              




