#include <iostream>
#include <windows.h>
#include "Header/box.hpp"
#include "Header/legacy.hpp"
using namespace std;

void swap(Box *&ch1, Box *&ch2) {
    ch1->black(ch1->x,ch1->y);
    ch2->black(ch2->x,ch2->y);

    Box *ptmp;
    //Swap *next
    ptmp = ch1->next;
    ch1->next = ch2->next;
    ch2->next = ptmp;
    //Swap *prev
    ptmp = ch1->prev;
    ch1->prev = ch2->prev;
    ch2->prev = ptmp;

    int tmp;
    //Swap x
    tmp = ch1->x;
    ch1->x = ch2->x;
    ch2->x = tmp;
    //Swap y
    tmp = ch1->y;
    ch1->y = ch2->y;
    ch2->y = tmp;

    //ReDraw Box
    Sleep(500);
    ch1->draw(ch1->x,ch1->y);
    ch2->draw(ch2->x,ch2->y);
}

int Box::objectCount = 0;

Box::Box() { objectCount++; }

void Box::append(Box *NODE) {
    next=NODE;
    NODE->prev = this;
}

void Box::black(short x, short y) {
    gotoxy(x,y+0); cout << "                " << endl;
    gotoxy(x,y+1); cout << "                " << endl;
    gotoxy(x,y+2); cout << "                " << endl;
    gotoxy(x,y+3); cout << "                " << endl;
    gotoxy(x,y+4); cout << "                " << endl;
}

void Box::draw(short a, short b) {
    x = a;
    y = b;
    char c = 219;
    char d = 205;
    textcolor(15);
    gotoxy(x,y+0); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+1); cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+2); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+3); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+4); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}

void Key::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
    char c = 219;
    char d = 205;
    textcolor(14);
    gotoxy(x,y+0); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+1); cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+2); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+3); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+4); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}

void Ney::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
    char c = 219;
    char d = 205;
    textcolor(12);
    gotoxy(x,y+0); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+1); cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+2); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+3); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+4); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}

void Key::open() {

}

void Ney::open() {
    
}