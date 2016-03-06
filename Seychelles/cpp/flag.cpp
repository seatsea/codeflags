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
	int x = width-1;
	int y = x/2;
	for(int i = 0;i <= y;i++){
		for(int j = 0;j <= x;j++){
			if		(j*3	+ i*2 <= x) color(BLUE);
			else if	(j*1.5 	+ i*2 <= x) color(YELLOW);
			else if	(j/1.5	+ i*2 <= x) color(RED);
			else if	(j/3	+ i*2 <= x) color(WHITE);
			else color(GREEN);
			printf("%c",219);
		}printf("\n");
	}
}
// *********
int main()
{
	printFlag(80); // define your flag width here
	getch();
	return 0;
}

