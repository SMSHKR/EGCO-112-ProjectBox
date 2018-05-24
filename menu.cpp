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

void instruction() 
{
char c = 219;
char d = 205;

textcolor(14);
gotoxy(6,5);  cout <<"dP 888888ba  .d88888b  d888888P dP     dP  a88888b. d888888P dP  .88888.  888888ba  " << endl;
gotoxy(6,6);  cout <<"88 88    `8b 88.    '    88    88     88 d8'   `88    88    88 d8'   `8b 88    `8b  " << endl;
gotoxy(6,7);  cout <<"88 88     88 `Y88888b.    88    88     88 88           88    88 88     88 88     88 " << endl;
gotoxy(6,8);  cout <<"88 88     88       `8b    88    88     88 88           88    88 88     88 88     88 " << endl;
gotoxy(6,9);  cout <<"88 88     88 d8'   .8P    88    Y8.   .8P Y8.   .88    88    88 Y8.   .8P 88     88 " << endl;
gotoxy(6,10); cout <<"dP dP     dP  Y88888P     dP    `Y88888P'  Y88888P'    dP    dP  `8888P'  dP     dP " << endl;
    
textcolor(14);
gotoxy(35,13); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
gotoxy(35,14); cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
gotoxy(35,15); cout <<c<<"              "<<c<<endl;
gotoxy(35,16); cout <<c<<"              "<<c<<endl;
gotoxy(35,17); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;

gotoxy(20,20);
cout<<"Select box which have key until then complete of each state";
}

int mode()
{
    textcolor(14);
    gotoxy(15,5); cout<<" .--.     .   .      .--.       .--.       .-.      .---.     .    .      .--.      .--.      .---.";
    gotoxy(15,6); cout<<":         |   |     :    :     :    :     (   )     |         |\  /|     :    :     |   :     |    "   ;  
    gotoxy(15,7); cout<<"|         |---|     |    |     |    |      `-.      |---      | \/ |     |    |     |   |     |--- " ;
    gotoxy(15,8); cout<<":         |   |     :    ;     :    ;     (   )     |         |   |     :    ;     |   ;     |    "  ;   
    gotoxy(15,9); cout<<" `--'     '   '      `--'       `--'       `-'      '---'     '   '      `--'      '--'      '---' " ; 
    gotoxy(15,11); cout<<"Arcade Mode";
    gotoxy(15,13); cout<<"Custom Mode";

    int choice = 1;
    char scroll;
    do {
        switch(choice) {
            case 1:
                gotoxy(13,11); cout << ">";
                break;
            case 2:
                gotoxy(13,13); cout << ">";
                break;
        }
        scroll = getch();
        switch (scroll) {
            case KEY_UP:
                switch(choice) {
                case 1:
                    gotoxy(13,11); cout << " ";
                    break;
                case 2:
                    gotoxy(13,13); cout << " ";
                    break;
                }
                choice == 1 ? choice = 2 : choice = 1;
                break;
            case KEY_DOWN:
                switch(choice) {
                    case 1:
                        gotoxy(13,10); cout << " ";
                        break;
                    case 2:
                        gotoxy(13,13); cout << " ";
                        break;
                }
                choice == 2 ? choice = 1 : choice = 2;
                break;
        }
    } while (scroll != KEY_ENTER);
 return choice;
 }
