#include <iostream>
#include <windows.h>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"
using namespace std;

int main() {

    //load load1(100);
    //load1.loading();
    bool check;
    try
    {
        Menu:
        check = false;
        do
        {
            system("cls");
            int choice = menu();
            switch (choice)
            {
            case 1: //start game
                break;
            case 2:
                system("cls");
                instruction();
                cin.get();
                goto Menu;
                break;
            case 3:
                goto Exit;
                break;
            }
        } while (check);
    }
    catch (...)
    {
        cin.clear();
        cin.ignore(50,'\n');
        check = true;
    }

    bool passed;
    passed = stage(3);
    cin.get();
    Exit:
    return 0;
}