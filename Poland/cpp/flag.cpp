#include <stdio.h>
#include <conio.h> // getch()

// ********* WINDOWS ONLY *********
#include <windows.h>
void color(unsigned char color){ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }
enum COLORS { // these values varies in consoles, they should be factory default ;)
	BLACK, 	DARKBLUE, 	DARKGREEN, 	DARKCYAN, 	DARKRED, 	MAGENTTA, 	ORANGE, 	GRAY,
	DARKGRAY, 	BLUE, 	GREEN, 		CYAN, 		RED,  		PINK, 		YELLOW, 	WHITE
};

void printFlag(int width){
	int x = width;
	int y = 2*x/5;
	
	int colors[2] = {WHITE, RED};
	
	for(int i = 0;i <= y;i++){ // print
		for(int j = 0;j <= x;j++){
			color(colors[i > (y /2)]); printf("%c",219);
		}
		printf("\n");
	}
	color(0x0f); // this is here because following text is going to be black
}
// *********
int main()
{
	printFlag(79);
	getch();
	return 0;
}

