#include <iostream>
#include <windows.h>

#include "menu.hpp"
#include "box.hpp"

using namespace std;
//someone please explain to me how this code work please...
void gotoxy(int x, int y)
{
    static HANDLE h = NULL;  
    if (!h) h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

void textcolor(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color); }

int main()
{
    //Why it's not working?
    textcolor(14);
    cout << "Color #14" << endl;
    textcolor(0);
    cout << "Color #0" << endl;
    
    //**JUST IDEA**
    bool check;
    try
    {
        check = false;
        do
        {
            system("cls");
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
    return 0;
}