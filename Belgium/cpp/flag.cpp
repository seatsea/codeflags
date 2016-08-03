#include <iostream>
#include <conio.h>

#include <windows.h>
using std::cout;
using std::endl;

#define YELLOW 	0x0E
#define RED		0x0C

void color(unsigned char color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main(int argc, char const *argv[])
{
	int width = 39;
	int height = 13 * width / 15;
	int strip = width / 3;

	for(int i = 0;i <= height;i++){
		color(0x00);
		for(int j = 0;j <= width;j++){
			if(j / strip == 1) color(RED);
			if(j / strip == 2) color(YELLOW);
			cout << (char)219;
		}
		cout << endl;
	}

	color(0x07);
	cout << endl << "Press any key to exit";
	getch(); return 0;
}