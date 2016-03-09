#include <stdio.h>
#include <conio.h> // getch()
#include <math.h> // fmod() abs()

// ********* WINDOWS ONLY *********
#include <windows.h>
void color(unsigned char color){ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }
enum COLORS { // these values varies in consoles, they should be factory default ;)
	BLACK, 	DARKBLUE, 	DARKGREEN, 	DARKCYAN, 	DARKRED, 	MAGENTTA, 	ORANGE, 	GRAY,
	DARKGRAY, 	BLUE, 	GREEN, 		CYAN, 		RED,  		PINK, 		YELLOW, 	WHITE
};
void printFlag(int width){
	double x = width;
	double y = 2*x/3;
	double c = (double)width/(double)15;
	
	for(int i = 0;i < y;i++){
		color(WHITE);
		for(int j = 0;j < x;j++){
			if( (int)(j/2 == (int)( (width/8) + c - abs(c - fmod(i,c*2) ) ) ) ) color(RED);
			printf("%c",219);
		}printf("\n");
	}
}
// *********
int main()
{
	printFlag(100); // define your flag width here
	getch();
	return 0;
}

