#include <iostream>
#include <windows.h>
#include "Header/load.hpp"
#include "Header/legacy.hpp"

using namespace std;

load::load(int i) { speed = i; }

void load::loading()
{
    char a = 120, b = 219;
    textcolor(7);
    gotoxy(40,3);
    cout << "LOADING";
    gotoxy(64,6);
    for (int i = 0; i <= 25; i++)
        cout << a;
    Sleep(150);
    cout << "\r";
    cout << "\t\t\t       ";
    textcolor(3);
    for (int i = 0; i <= 25; i++)
    {
        cout << b;
        Sleep(speed);
    }
    system("pause>0");
}
