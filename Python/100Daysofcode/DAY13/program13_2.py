#  Un the previous program in which we do that one thing is range not include the 20

from random import randint

dice_images = [
    """
    +-------+
    |       |
    |   ●   |
    |       |
    +-------+
    """,
    """
    +-------+
    | ●     |
    |       |
    |     ● |
    +-------+
    """,
    """
    +-------+
    | ●     |
    |   ●   |
    |     ● |
    +-------+
    """,
    """
    +-------+
    | ●   ● |
    |       |
    | ●   ● |
    +-------+
    """,
    """
    +-------+
    | ●   ● |
    |   ●   |
    | ●   ● |
    +-------+
    """,
    """
    +-------+
    | ●   ● |
    | ●   ● |
    | ●   ● |
    +-------+
    """
]

dice_roll =  randint(1,6)

print(dice_images[dice_roll-1])