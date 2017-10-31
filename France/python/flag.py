import math

END = "\033[0m"
RED = "\033[31;41m"
WHITE = "\033[37;47m"
BLUE = "\033[34;44m"

width = 80
height = 30
stripes = 3
color = ""
stripe_h = int(height/stripes)
total = ""


for i in range(0, height):
    color_id = math.ceil((i+1/stripe_h) % stripe_h)
    if color_id == 0 or 1:
        colors = BLUE
    elif color_id == 2:
        colors = WHITE
    elif color_id == 3:
        colors = RED

    print((color+"a")*width)
