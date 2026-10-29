enemies = 1  


# In python we have to do one dont change var in inside function is bit confusing
def increaseEnemies ():
       global enemies
       enemies += 1 
       print(f"Enemeies inside function {enemies}")

increaseEnemies()
print(f"Enemeies outside function {enemies}")