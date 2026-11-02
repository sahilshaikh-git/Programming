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


    total +=  int(input("How many quarters  ? : "))*0.25
    total += int(input("How many dimes ? : "))*0.10
    total  +=int(input("How many nickels  ? : "))*0.05
    total +=int(input("How many pennies   ? : "))*0.01


    return total

# TODO 2 create transaction status function
def transaction_successful(money_received , drink_cost):
    """if money less than drink cost return false or return true """

    if money_received >= drink_cost :

        return True
    
    else :
        return False

# TODO 3 create coffee machine money change

def calculate_change(money_received, drink_cost):
    change = 0

    if money_received > drink_cost:
        change = money_received - drink_cost

    return round(change, 2)

# TODO : 1 . print report of all coffee resources
machineoff = True


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
           print("Preparing you drink !!")
           preference =MENU[choice]
           if transaction_successful(money_receives, preference["cost"]):
            # Step 1: Calculate change

            # Step 2: Print change

            # Step 3: Deduct ingredients

            # Step 4: Add drink cost to profit

            # Step 5: Print success message
             # Print refund message

           else :
               


                          

               


       





