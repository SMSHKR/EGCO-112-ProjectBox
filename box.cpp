#include <iostream>
#include "Header/box.hpp"
#include "Header/legacy.hpp"
using namespace std;

int Box::objectCount = 0;

Box::Box() { objectCount++; }

void Box::append(Box *NODE) {
    next=NODE;
    NODE->prev = this;
}

Key::Key() {
    //Debug
    cout << " Key Created" << endl;
}

Ney::Ney() {
    //Debug
    cout << "Ney Created" << endl;
}

void Key::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
    textcolor(15);
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}

void Key::open() {

}

void Ney::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
    textcolor(12);
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
}

void Ney::open() {
    
}