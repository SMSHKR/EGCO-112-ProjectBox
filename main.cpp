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
    bool check = false;
    menu();

    bool passed;
    passed = stage(3);
    cin.get();
    return 0;
}