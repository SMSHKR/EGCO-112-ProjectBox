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
    cout << "Key" << endl;
}

void Key::open() {

}

void Ney::draw(short a, short b) {
    x = a;
    y = b;
    gotoxy(x,y);
    cout << "Ney" << endl;
}

void Ney::open() {
    
}