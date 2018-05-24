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
    stage(15);
/*
    choice = mode();
    switch (choice) {
        case 1: 
            system("cls");
            goto Arcade;
            break;
        case 2: 
            system("cls");
            goto Custom;
            break;
    }
Arcade:
    bool passed;
    passed = stage(3);
    system("cls");
    
Custom:
    int numbox;
    cout << "Enter Number Of Box (3-50): ";
    cin >> numbox;
    passed = stage(numbox);
    system("cls");
*/
    /*
    if (passed)
    {
    textcolor(14);
    gotoxy(6,5);cout<<"           (        )     )       (                )  (               )          )   (     (        )     )       ( ";
    gotoxy(6,6);cout<<" (  (      )\ )  ( /(  ( /(       )\ )     (    ( /(  )\ )   (     ( /(       ( /(   )\ )  )\ )  ( /(  ( /(       )\ )";
    gotoxy(6,7); cout<<" )\))(   '(()/(  )\()) )\()) (   (()/(     )\   )\())(()/(   )\    )\()) (    )\()) (()/( (()/(  )\()) )\()) (   (()/(";
    gotoxy(6,8); cout<<"((_)()\ )  /(_))((_)\ ((_)\  )\   /(_))  (((_) ((_)\  /(_))(((_) |((_)\  )\  ((_)\   /(_)) /(_))((_)\ ((_)\  )\   /(_)";
    gotoxy(6,9); cout<<"_(())\_)()(_))   _((_) _((_)((_) (_))    )\___  _((_)(_))  )\___ |_ ((_)((_)  _((_) (_))_ (_))   _((_) _((_)((_) (_))";
    gotoxy(6,10);cout<<"W     W III N   N N   N EEEE RRRR       CCC H  H III  CCC K  K EEEE N   N     DDD  III N   N N   N EEEE RRRR ";
    gotoxy(6,11); cout<<"W     W  I  NN  N NN  N E    R   R     C    H  H  I  C    K K  E    NN  N     D  D  I  NN  N NN  N E    R   R";
    gotoxy(6,12);cout<<"W  W  W  I  N N N N N N EEE  RRRR      C    HHHH  I  C    KK   EEE  N N N     D  D  I  N N N N N N EEE  RRRR ";
    gotoxy(6,13); cout<<" W W W   I  N  NN N  NN E    R R       C    H  H  I  C    K K  E    N  NN     D  D  I  N  NN N  NN E    R R   ";
    gotoxy(6,14); cout<<"  W W   III N   N N   N EEEE R  RR      CCC H  H III  CCC K  K EEEE N   N     DDD  III N   N N   N EEEE R  RR \n";
    }
    else
    {
    textcolor(14);
    gotoxy(55,10);  cout<<"N   N  OOO   OOO  BBBB " ;
    gotoxy(55,11); cout<<"NN  N O   O O   O B   B" ;
    gotoxy(55,12); cout<<"N N N O   O O   O BBBB " ;
    gotoxy(55,13);  cout<<"N  NN O   O O   O B   B" ;
    gotoxy(55,14);  cout<<"N   N  OOO   OOO  BBBB \n" ;
    }
    */
    cout << "objectCount: " << Box::objectCount << endl;
    cin.get();
Exit:
    return 0;
    
}
  