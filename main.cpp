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
Menu:
    system("cls");
    int choice = menu();
    switch (choice) {
        case 1: 
            system("cls");
            goto Game;
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
    
Game:

    bool passed;
    choice = mode();
    switch (choice) {
        case 1: 
            system("cls");
            passed = arcade();
            break;
        case 2: 
            //bool passed = custom();
            break;
    }
    
/*
    int numbox;
    cout << "Enter Number Of Box (3-50): ";
    cin >> numbox;
    passed = stage(numbox);
    system("cls");
*/

    result(passed);

Exit:
    return 0;
    
}
  