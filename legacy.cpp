#include <windows.h>
#include "Header/legacy.hpp"
using namespace std;

void gotoxy(short x, short y) {
    static HANDLE h = NULL;  
    if (!h) h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}
    
void textcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}