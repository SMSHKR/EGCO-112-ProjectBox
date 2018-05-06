#include <iostream>
#include <windows.h>

#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/game.hpp"

using namespace std;
//someone please explain to me how this code work please...
void gotoxy(short x, short y)
{
    static HANDLE h = NULL;  
    if (!h) h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

void textcolor(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color); }

int main()
{
    /**JUST IDEA**
    bool check;
    try
    {
        check = false;
        do
        {
            //system("cls");
            int choice = menu();
            switch (choice)
            {
            case 1: //maybe start game
                break;
            case 2: //maybe instruction/howto
                break;
            case 3: //meaybe exit?
                break;
            default: //throw exceoption
                throw "cin >> ERROR";
            }
        } while (check);
    }
    catch (...)
    {
        cin.clear();
        cin.ignore(50,'\n');
        check = true;
    }
    */

    game();

    return 0;
}