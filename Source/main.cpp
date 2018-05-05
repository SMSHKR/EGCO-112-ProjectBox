#include <iostream>
#include <windows.h>

#include "menu.hpp"
#include "box.hpp"

using namespace std;

int main()
{
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