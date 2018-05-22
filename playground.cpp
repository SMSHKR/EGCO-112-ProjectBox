#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"

using namespace std;

int main() {
    
    load a(1000);
    a.loading();
    cout << "\nFor Testing" << endl;
    cin.get();
   
    return 0;
}