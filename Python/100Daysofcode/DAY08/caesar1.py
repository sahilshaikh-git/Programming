alphabet = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g',
    'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u',
    'v', 'w', 'x', 'y', 'z'
]

direction = input("Type encode to encrypt  ,  type decode to decrypt : \n ").lower()
text =  input("Type your message \n").lower()
shift  =  int(input("Type the shift number :\n"))

def encrypt():
       result = "" 
       for i in text :
              index = alphabet.index(i)
              newindex =( index + shift   )%26
              result = result +alphabet[ newindex]
       
       print(f"here is the encoded result : {result}")


def decrypt():
       result = "" 
       for i in text :
              index = alphabet.index(i)
              newindex = (index - shift)%26
              result  = result + alphabet[newindex]

       print(f"here is decoded code {result}")

if direction == "encrypt":
       print("you are encrypt")
       encrypt()

flag =  True

whiek







