import random

alphabets = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
]

numbers = [
    '0', '1', '2', '3', '4',
    '5', '6', '7', '8', '9'
]

special_symbols = ['!', '@', '#', '$', '%', '&', '*', '_', '-', '?']

letter =  int(input("Enter the total number of letter in your password"))
num = int( input("Enter the total number of intger used in you password"))
symbolss = int( input("Enter the total number of symbols used in you password"))

password = " "
for i in range(0 , letter):
       password += random.choice(alphabets)


for i in range(0 , num):
       password += random.choice(numbers)
 

for i in range(0 , symbolss):
       password += random.choice(special_symbols)
      

       
print(password)

