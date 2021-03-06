#include <iostream>
#include <windows.h>
#include "Header/box.hpp"
#include "Header/legacy.hpp"
using namespace std;

void swap(Box *&ch1, Box *&ch2) {
    //Draw Black over Box
    Sleep(400);
    ch1->black();
    ch2->black();

    //Swap linker
    std::swap(ch1->key,ch2->key);

    //ReDraw Box
    Sleep(400);
    ch1->draw();
    ch2->draw();
}

int Box::objectCount = 0;

Box::Box(bool Have_Key) { key = Have_Key; objectCount++; }
Box::~Box() { objectCount--; }

bool Box::open(Box *&HEAD, Box *pointer) {
    draw_color();
    move_cursor();
    Sleep(1000);

    pointer->next->prev = pointer->prev;
    pointer->prev->next = pointer->next;
    if (HEAD == this) HEAD = HEAD->next;

    return key;
}

void Box::setxy(short a, short b) {
    x = a;
    y = b;
}

void Box::append(Box *NODE) {
    next = NODE;
    NODE->prev = this;
}

void Box::draw_cursor() {
    gotoxy(x+8,y+6); cout << "^";
}

void Box::move_cursor() {
    gotoxy(x+8,y+6); cout << " ";
}

void Box::black() {
    gotoxy(x,y+0); cout << "                " << endl;
    gotoxy(x,y+1); cout << "                " << endl;
    gotoxy(x,y+2); cout << "                " << endl;
    gotoxy(x,y+3); cout << "                " << endl;
    gotoxy(x,y+4); cout << "                " << endl;
}

void Box::draw() {
    char c = 219;
    char d = 205;
    textcolor(15);
    gotoxy(x,y+0); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+1); cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+2); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+3); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+4); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}

void Box::draw_color() {
    char c = 219;
    char d = 205;
    if (key) textcolor(14);
    else textcolor(12);
    gotoxy(x,y+0); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+1); cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    gotoxy(x,y+2); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+3); cout <<c<<"              "<<c<<endl;
    gotoxy(x,y+4); cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}