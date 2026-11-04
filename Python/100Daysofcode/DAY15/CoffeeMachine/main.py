MENU = {
    "espresso": {
        "ingredients": {
            "water": 50,
            "coffee": 18,
        },
        "cost": 1.5,
    },
    "latte": {
        "ingredients": {
            "water": 200,
            "milk": 150,
            "coffee": 24,
        },
        "cost": 2.5,
    },
    "cappuccino": {
        "ingredients": {
            "water": 250,
            "milk": 100,
            "coffee": 24,
        },
        "cost": 3.0,
    }
}


profit = 0 
resources = {
    "water": 300,
    "milk": 200,
    "coffee": 100,
}

def is_resource_sufficient ( order_ingredient):
    """It return true when ingredient is suffiicient or return False"""
    for item in order_ingredient:
        if  resources[item] < order_ingredient[item] :
            print(f"Sorry ,their is not enough of {item}")
            return False
    return True

def Substract(order_ingredient) :
    for item in order_ingredient:
        resources[item]-=order_ingredient[item]

def process_coin():
    total = 0

    print("Insert the Values :")
    total +=  int(input("How many quarters  ? : "))*0.25
    total += int(input("How many dimes ? : "))*0.10
    total  +=int(input("How many nickels  ? : "))*0.05
    total +=int(input("How many pennies   ? : "))*0.01

    return total

# TODO 2 create transaction status function
def transaction_successful(money_received , drink_cost):
    """if money less than drink cost return false or return true """

    if money_received >= drink_cost :
        change = 0 
        change = money_received -drink_cost 

        print(f"here is your change {round(change,2)}")
        return True
    
    else :
        print("sorry You dont have enough money")
        return False


# TODO : 1 . print report of all coffee resources
machineoff = True

def makecoffee(choice,order):
    """Create the coffee and deducat from resouse"""
    for item in order :
        resources[item] -= order[item]

    print(f"here is your {choice} ready :🍵🍵")
    


while machineoff :
       choice = input('What would you like ? (espresso / latte / cappuccino) : ').lower()
       if choice == "off":
        machineoff = False
       elif choice == "report":
            print(f"Water  : {resources['water']} ml")
            print(f"Milk : {resources['milk']} ml")
            print(f"Coffee  : {resources['coffee']} gm")
            print(f"Money :  ${profit}")
       else :   
           preference =MENU[choice]
           if is_resource_sufficient( preference["ingredients"]):
               payment = process_coin()
               if transaction_successful(payment, preference["cost"]):
                 makecoffee(choice, preference["ingredients"])
                   
                   
               
               
               
         



                          

               


       





