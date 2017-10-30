class colors:
    END = "\033[0m"
    RED = "\033[31;41m"
    WHITE = "\033[37;47m"
    BLUE = "\033[34;44m"

width = 80
height = 30

total = ""

stripew = int(width / 3)

for i in range(0, height):
    for b in range(0, stripew):
    	total += colors.BLUE + "B" + colors.END
    for y in range(0, stripew):
    	total += colors.WHITE + "Y" + colors.END
    for r in range(0, stripew):
    	total += colors.RED + "R" + colors.END

    total += "\n"

print(total)
