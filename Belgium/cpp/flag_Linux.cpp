#include <iostream>
using std::cout;
using std::endl;
using std::string;

string yellow = "\033[0;43m";
string red = "\033[0;41m";
string black = "\033[0;40m"; 

int main(int argc, char const *argv[])
{
    int width = 39;
    int height = 13 * width / 15 / 2;
    // it is all divided by 2 due to the text character ratio ;)
    int strip = width / 3;

    for(int i = 0;i <= height;i++){
        cout << black;
        for(int j = 0;j <= width;j++){
            if(j / strip == 1) cout << yellow;
            if(j / strip == 2) cout << red;
            cout << " ";
        }
        cout << "\033[0;m" << endl;
    }
    cout << endl << "\033[0;m" << "Press any key to exit";
    return 0;
}