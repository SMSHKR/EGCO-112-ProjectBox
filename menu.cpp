#include <iostream>
#include <conio.h>
#include "Header/menu.hpp"
#include "Header/legacy.hpp"
using namespace std;

#define KEY_ENTER 13
#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80

int menu() 
{
    textcolor(14);
    gotoxy(6,5);  cout <<" 888888ba   .88888.  dP    dP    dP     dP 888888ba  dP     dP 888888ba   .88888.  dP   dP   dP 888888ba  " << endl;
    gotoxy(6,6);  cout <<" 88    `8b d8'   `8b Y8.  .8P    88     88 88    `8b 88   .d8' 88    `8b d8'   `8b 88   88   88 88    `8b " << endl;
    gotoxy(6,7);  cout <<" 88aaaa8P' 88     88  Y8aa8P     88     88 88     88 88aaa8P'  88     88 88     88 88  .8P  .8P 88     88 " << endl;
    gotoxy(6,8);  cout <<" 88   `8b. 88     88 d8'  `8b    88     88 88     88 88   `8b. 88     88 88     88 88  d8'  d8' 88     88 " << endl;
    gotoxy(6,9);  cout <<" 88    .88 Y8.   .8P 88    88    Y8.   .8P 88     88 88     88 88     88 Y8.   .8P 88.d8P8.d8P  88     88 " << endl;
    gotoxy(6,10); cout <<" 88888888P  `8888P'  dP    dP    `Y88888P' dP     dP dP     dP dP     dP  `8888P'  8888' Y88'   dP     dP " << endl;

    gotoxy(44,18); cout<<"Start";
    gotoxy(44,20); cout<<"Instruction";
    gotoxy(44,22); cout<<"Exit";

    int choice = 1;
    char scroll;
    do {
        switch(choice) {
            case 1:
                gotoxy(42,18); cout << ">";
                break;
            case 2:
                gotoxy(42,20); cout << ">";
                break;
            case 3:
                gotoxy(42,22); cout << ">";
                break;
        }
        scroll = getch();
        switch(scroll) {
            case KEY_UP:
                switch(choice) {
                    case 1:
                        gotoxy(42,18); cout << " ";
                        break;
                    case 2:
                        gotoxy(42,20); cout << " ";
                        break;
                    case 3:
                        gotoxy(42,22); cout << " ";
                        break;
                }
                choice == 1 ? choice = 3 : choice--;
                break;
            case KEY_DOWN:
                switch(choice) {
                    case 1:
                        gotoxy(42,18); cout << " ";
                        break;
                    case 2:
                        gotoxy(42,20); cout << " ";
                        break;
                    case 3:
                        gotoxy(42,22); cout << " ";
                        break;
                }
                choice == 3 ? choice = 1 : choice++;
                break;
        }
    } while (scroll != KEY_ENTER);
    
    return choice;
}

void instruction() {
    
}