#include <iostream>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"

using namespace std;

class Base {
public:
    virtual void dis() {cout << "Base" << endl;}
    Base() {cout << "Base Constructed" << endl;}
};

class Derived : public Base {
public:
    void dis() {cout << "Derived" << endl;}
    Derived() {cout << "Derived Constructed" << endl;}
};

int main() {
    
    cout << "For Testing" << endl;

    char a = 201; //╔
    char b = 188; //╝
    char c = 219; //█
    cout << a << "\n" << b << "\n" << c << endl;
    cout << "╝\n╔\n█\n" << endl;
   
    Base *ptr;
    Derived test;
    ptr = &test;
    ptr->dis();
    
    cin.get();
    return 0;
}