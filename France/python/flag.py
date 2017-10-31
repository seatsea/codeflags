class colors:
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
    
	total += colors.BLUE + "B" + colors.END
	total += colors.WHITE + "W" + colors.END
    total += colors.RED + "R" + colors.END

    total += "\n"

print(total)
