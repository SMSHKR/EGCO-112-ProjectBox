#include <iostream>
#include "Header/menu.hpp"
#include "Header/legacy.hpp"
using namespace std;

int menu() 
{
    gotoxy(6,5);
    textcolor(14);
    cout<<" 888888ba   .88888.  dP    dP    dP     dP 888888ba  dP     dP 888888ba   .88888.  dP   dP   dP 888888ba   \n";
    gotoxy(6,6);
    cout<<" 88    `8b d8'   `8b Y8.  .8P    88     88 88    `8b 88   .d8' 88    `8b d8'   `8b 88   88   88 88    `8b  \n";
    gotoxy(6,7);
    cout<<" 88aaaa8P' 88     88  Y8aa8P     88     88 88     88 88aaa8P'  88     88 88     88 88  .8P  .8P 88     88  \n";
    gotoxy(6,8);
    cout<<" 88   `8b. 88     88 d8'  `8b    88     88 88     88 88   `8b. 88     88 88     88 88  d8'  d8' 88     88  \n";
    gotoxy(6,9);
    cout<<" 88    .88 Y8.   .8P 88    88    Y8.   .8P 88     88 88     88 88     88 Y8.   .8P 88.d8P8.d8P  88     88  \n";
    gotoxy(6,10);
    cout<<" 88888888P  `8888P'  dP    dP    `Y88888P' dP     dP dP     dP dP     dP  `8888P'  8888' Y88'   dP     dP  \n";

    cout<<"\n\n1.Start\n";
    cout<<"2.Instruction\n";
    cout<<"3.Exit\n";
    int choice;
    cin >> choice; //may change workaround to sth like getch()
    return choice;
}