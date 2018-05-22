#include <iostream>
#include <random>
#include <chrono>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"

using namespace std;

int main() {
    cout << "For Testing" << endl;
    char a = 201; //╔
    char b = 188; //╝
    char c = 219; //█
    char d = 205; //= 
    char e = 187;
    char f = 200;
    
    /*textcolor(15);
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;*/

    "██████╗  ██████╗ ██╗  ██╗    ██╗   ██╗███╗   ██╗██╗  ██╗███╗   ██╗ ██████╗ ██╗    ██╗███╗   ██╗\
     ██╔══██╗██╔═══██╗╚██╗██╔╝    ██║   ██║████╗  ██║██║ ██╔╝████╗  ██║██╔═══██╗██║    ██║████╗  ██║\
     ██████╔╝██║   ██║ ╚███╔╝     ██║   ██║██╔██╗ ██║█████╔╝ ██╔██╗ ██║██║   ██║██║ █╗ ██║██╔██╗ ██║\
     ██╔══██╗██║   ██║ ██╔██╗     ██║   ██║██║╚██╗██║██╔═██╗ ██║╚██╗██║██║   ██║██║███╗██║██║╚██╗██║\
     ██████╔╝╚██████╔╝██╔╝ ██╗    ╚██████╔╝██║ ╚████║██║  ██╗██║ ╚████║╚██████╔╝╚███╔███╔╝██║ ╚████║\
     ╚═════╝  ╚═════╝ ╚═╝  ╚═╝     ╚═════╝ ╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝  ╚══╝╚══╝ ╚═╝  ╚═══╝";
    
    gotoxy(5,5);//5+7=12
    cout<<c<<c<<c<<c<<c<<c<<e; 
    gotoxy(14,5);
    cout<<c<<c<<c<<c<<c<<c<<e; //14+7=21
    gotoxy(22,5);
    cout<<c<<c<<e;//22+3=25
    gotoxy(27,5);
    cout<<c<<c<<e;//27+3=30;
    gotoxy(34,5);
    cout<<c<<c<<e;//34+3=37
    gotoxy(40,5);
    cout<<c<<c<<e<<c<<c<<c<<e;//40+7=47
    gotoxy(50,5);
    cout<<c<<c<<e<<c<<c<<e;//50+6=56
    gotoxy(58,5);
    cout<<c<<c<<e<<c<<c<<c<<e;//58+7=65
    gotoxy(68,5);
    cout<<c<<c<<e;//68+3=71
    gotoxy(72,5);
    cout<<c<<c<<c<<c<<c<<c<<e;//72+7=79
    gotoxy(80,5);
    cout<<c<<c<<e;//80+3=83
    gotoxy(87,5);
    cout<<c<<c<<e<<c<<c<<c<<e;//87+7=94
    gotoxy(97,5);
    cout<<c<<c<<e;

    gotoxy(5,6);//5+7=12 
    cout<<c<<c<<a<<d<<d<<c<<c<<e
    <<c<<c<<a<<d<<d<<d<<c<<c<<e
    <<f<<c<<c<<e<<c<<c<<a<<d<<a; 
    gotoxy(28,6);
    cout<<c<<c<<e;//28+3=31;
    gotoxy(35,6);
    cout<<c<<c<<e;//35+3=38
    gotoxy(41,6);
    cout<<c<<c<<e<<c<<c<<c<<e;//41+7=48
    gotoxy(51,6);
    cout<<c<<c<<e<<c<<c<<e;//51+6=57
    gotoxy(59,6);
    cout<<c<<c<<e<<c<<c<<c<<e;//59+7=66
    gotoxy(69,6);
    cout<<c<<c<<e;//69+3=72
    gotoxy(73,6);
    cout<<c<<c<<c<<c<<c<<c<<e;//73+7=80
    gotoxy(81,6);
    cout<<c<<c<<e;//81+3=84
    gotoxy(88,6);
    cout<<c<<c<<e<<c<<c<<c<<e;//88+7=95
    gotoxy(98,6);
    cout<<c<<c<<e;



    cin.get();
    return 0;
}