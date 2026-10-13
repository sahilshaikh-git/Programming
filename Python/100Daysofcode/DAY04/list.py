#  List -> it is the data structure in python and it should store multiple data of similar type  , it is like an array   

State_of_India  =  [ "Maharashtra" , "Punjab" , "Karnataka" , "hariyana "]

#  offset  of the maharashtra is 0 and offset of punjab is 1 so that indexing give like this

print(State_of_India)
print(State_of_India[2])
print(State_of_India[0])

# It is will fetch the last item in the list
State_of_India[-1] = "Hariyana"


#  It is add the end of the list (Array) 
State_of_India.append("Rajasthan")



#  it is extend the list  add multople item in the list
State_of_India.extend(["YashLand" ,"BrewLand"])


print(State_of_India)



