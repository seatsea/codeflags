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
    color_id = int(math.ceil(((i)/stripe_h) % stripe_h))
    colors = [RED,WHITE,BLUE]
    color = colors[color_id]

    print(((color+"a")*width)+END)

print(END)
