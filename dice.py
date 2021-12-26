import random

class Dice():
    """This is a dice"""

    def __init__(self):
        self.sides = 6

    def roll_die(self):
        x = random.randint(1,self.sides)
        print(x)

    def no_of_sides(self,y):
        self.sides = y

# We create an instance of the class Dice
dice = Dice()
dice.roll_die()

# We change the number of sides to 10
dice.no_of_sides(10)
dice.roll_die()

# We change the number of side back to 6
dice.no_of_sides(6)
dice.roll_die()
