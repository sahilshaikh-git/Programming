import art 

print(art.logo)
alphabet = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g',
    'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u',
    'v', 'w', 'x', 'y', 'z'
]




def encode_decode (text , shift , decode_encode):
       result = ""
       sign = 1
       if decode_encode == "encode" :
              sign =  -1
       


       for letter in text :

              if letter not in alphabet :
                     result += letter
              else :
                     index =  alphabet.index(letter)
                     newindex = ( index - (sign)*shift)%26 
                     result =  result + alphabet[newindex]

       print(f" here is {decode_encode}d code is { result}")





flag   =  True 

while( flag):
       direction = input("Type encode to encrypt  ,  type decode to decrypt : \n ").lower()
       text =  input("Type your message \n").lower()
       shift  =  int(input("Type the shift number :\n"))
       encode_decode(text ,shift , direction)

       restrat = input("print yes to continues , stop to 'no' ")

       if restrat == "no":
              flag = False
              print("good bye")
