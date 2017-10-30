#include <iostream>
using std::cout;
using std::endl;

#define BLACK  0x00
#define YELLOW 0x0E
#define RED    0x0C

#ifdef _WIN32
#include <conio.h>
#include <windows.h>

#define BLANK (char)219

void color(unsigned char color){
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void reset() {}
#else
#define BLANK " "

void color(unsigned char color)
{
  switch(color)
  {
  case BLACK:
    cout << "\033[0;40m";
    break;
  case YELLOW:
    cout << "\033[0;43m";
    break;
  case RED:
    cout << "\033[0;41m";
    break;
  }
}
void reset()
{
  cout << "\033[0m";
}
#endif // _WIN32

int main(int argc, char const *argv[])
{
  int width = 39;
  int height = 13 * width / 15 / 2;
  // it is all divided by 2 due to the text character ratio ;)
  int strip = width / 3;

  for (int i = 0; i <= height; i++) {
    color(BLACK);
    for (int j = 0; j <= width; j++) {
      if (j / strip == 1) color(RED);
      if (j / strip == 2) color(YELLOW);
      cout << BLANK;
    }
    reset();
    cout << endl;
  }

#ifdef _WIN32
  color(0x07);
  cout << endl << "Press any key to exit";
  getch();
#endif // _WIN32

  reset();
  return 0;
}
