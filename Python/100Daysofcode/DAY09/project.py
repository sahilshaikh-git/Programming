import art

print(art.gold + art.gavel + art.reset)

def winning(bidding_dic):
       highest_bid = 0
       winner =""

       for bidder in bidding_dic:
              if bidding_dic[bidder] > highest_bid:
                     highest_bid = bidding_dic[bidder]
                     winner = bidder

       print(f"Winner is the {winner} with the bid {highest_bid}")
       

people  = {}

flag = True

while(flag):

       name = input("Enter the name :")
       bid = int(input("Enter number "))
       people[name] = bid
       game_continue = input("s their next player in  'yes' to continue else no :  ").lower()

       
       if game_continue == "no":
              flag =False
              winning(people)
       elif game_continue == "yes" :
              print("\n"*100)









       