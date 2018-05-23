#include <iostream>
#include <random>
#include <chrono>
#include "Header/menu.hpp"
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/load.hpp"
#include "Header/legacy.hpp"

using namespace std;

int main() {
    
    cout << "For Testing" << endl;

    char a = 201; //╔
    char b = 188; //╝
    char c = 219; //█
    cout << a << "\n" << b << "\n" << c << endl;
    cout << "╝\n╔\n█\n" << endl;
   
    default_random_engine rand_num{static_cast<long unsigned int>(chrono::high_resolution_clock::now().time_since_epoch().count())};
    float seed = 0;
    for (int i=0; i<10; i++) {
        uniform_real_distribution<> range{seed,1};
        cout << range(rand_num) << endl;
        //cout << rand_num() << endl;
        seed += 0.1;
    }
        
    
    cin.get();
    return 0;
}