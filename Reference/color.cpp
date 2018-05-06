#include <iostream>
#include <windows.h>
using namespace std;

void textcolor(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color); }

int main() {
    for(int i=0; i<=128; i++){
        textcolor(i);
        cout << "Color #" << i << endl;
    }
    cin.get();
    return 0;
}