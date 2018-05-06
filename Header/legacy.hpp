#ifndef LEGACY_HPP_INCLUDED 
#define LEGACY_HPP_INCLUDED

#include <windows.h>

//someone please explain to me how this code work please...
void gotoxy(short x, short y)
{
    static HANDLE h = NULL;  
    if (!h) h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

void textcolor(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color); }

#endif // LEGACY_HPP_INCLUDED