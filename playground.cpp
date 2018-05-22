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
<<<<<<< HEAD
=======
    
>>>>>>> 134d90a1696ef4efc9d3da937d75383a5879a602
    cout << "For Testing" << endl;
    char a = 201; //╔
    char b = 188; //╝
    char c = 219; //█
<<<<<<< HEAD
    char d = 205; //= 
    char e = 187;
    textcolor(15);
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<c<<c<<c<<c<<d<<d<<d<<d<<d<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<"              "<<c<<endl;
    cout <<c<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<d<<c<<endl;
  
    
=======
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
>>>>>>> 134d90a1696ef4efc9d3da937d75383a5879a602
        
    
    cin.get();
    return 0;
}