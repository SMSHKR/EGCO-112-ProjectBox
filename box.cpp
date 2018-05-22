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

void Box::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
<<<<<<< HEAD
    textcolor(15);
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
=======
    cout << "Box" << endl;
>>>>>>> 134d90a1696ef4efc9d3da937d75383a5879a602
}

void Key::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
    cout << "Key" << endl;
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

void Key::open() {

}

void Ney::open() {
    
}