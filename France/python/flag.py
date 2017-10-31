class colors:
    END = "\033[0m"
    RED = "\033[31;41m"
    WHITE = "\033[37;47m"
    BLUE = "\033[34;44m"

width = 80
height = 30
stripes = 3
color = ""
stripe_h=stripes/height
total = ""


for i in range(0, height):
    for b in range(0, width):
    	total += colors.BLUE + "B" + colors.END
    for y in range(0, width):
    	total += colors.WHITE + "W" + colors.END
    for r in range(0, width):
    	total += colors.RED + "R" + colors.END

    total += "\n"

print(total)
