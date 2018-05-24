#include <iostream>
#include <windows.h>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"
using namespace std;


int main() {

    load load1(100);
    load1.loading();

    int choice, game_mode;
    bool passed;

    do {
        system("cls");
        choice = menu();
        switch (choice) {
            case 1: 
                system("cls");
                game_mode = mode();
                switch (game_mode) {
                    case 1: 
                        system("cls");
                        passed = arcade();
                        break;
                    case 2: 
                        passed = custom();
                        break;
                }
                result(passed);
                break;
            case 2:
                system("cls");
                instruction();
                cin.get();
                break;
        }
    } while (choice != 3);

    return 0;  
}
  