#include <iostream>
#include "Header/box.hpp"
using namespace std;

int Box::objectCount = 0;

Box::Box() {
    objectCount++;
}

void Box::append(Box *NODE) {
    next=NODE;
    NODE->prev = this;
}

Key::Key() {
    //Debug
    cout << "Key Created" << endl;
}

Ney::Ney() {
    //Debug
    cout << "Ney Created" << endl;
}

void Key::open() {

}

void Ney::open() {
    
}