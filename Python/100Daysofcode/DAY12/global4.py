enemies = 1  


# In python we have to do one dont change var in inside function is bit confusing

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
def increaseEnemies (enemy):
       print(f"Enemeies inside function {enemies}")
       return enemy +1

enemies =increaseEnemies(enemies)
print(f"Enemeies outside function {enemies}")