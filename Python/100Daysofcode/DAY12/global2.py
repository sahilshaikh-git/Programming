enemies = 1  

def increaseEnemies ():
       global enemies
       enemies += 1 
       print(f"Enemeies inside function {enemies}")

increaseEnemies()
print(f"Enemeies outside function {enemies}")