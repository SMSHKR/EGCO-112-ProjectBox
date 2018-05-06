#include <iostream>
#include <windows.h>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"

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
    system("color 2f");
    system("color 0e");
    char a= 120,b=219;
    cout<<"\n\n\n\t\t\t\t\tLOADING";
    cout<<"\n\n\n";
    cout<<"\t\t\t       ";
    for(int i = 0;i<=25;i++)
    cout<<a;
    Sleep(150);
    cout<<"\r";
    cout<<"\t\t\t       ";
    for(int i=0;i<=12;i++)
    {
        cout<<b;
        Sleep(200);
    }
    system("pause>0");
    //**JUST IDEA**
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
    
    Box *HEAD = NULL;
    Box *t = NULL;
    
    bool passed;
    passed = stage(3,HEAD,t);

    return 0;
}