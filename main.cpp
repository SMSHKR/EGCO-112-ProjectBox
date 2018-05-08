#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"

using namespace std;

int main()
{
    load load1(200);
    load1.loading();
    
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
    
    //Box *HEAD = NULL;
    //Box *t = NULL;
    
    //bool passed;
    //passed = stage(3,HEAD,t);

    return 0;
}