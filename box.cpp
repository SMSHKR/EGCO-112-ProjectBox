#include "Header/box.hpp"

int Box::objectCount = 0;

Box::Box() {
    objectCount++;
}

void Box::append(Box *NODE) {
    next=NODE;
    NODE->prev = this;
}

void Key::open() {

}

void Ney::open() {
    
}