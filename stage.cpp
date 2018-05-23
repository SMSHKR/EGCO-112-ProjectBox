#include <iostream>
#include <random>
#include <chrono>
#include <conio.h>
#include <windows.h>
#include "Header/box.hpp"
#include "Header/legacy.hpp"
using namespace std;

//Prototype
void Create_Box(Box*&,int);
void Place_Box(Box*);

bool stage(int num) {

    Box *HEAD = nullptr;
    Create_Box(HEAD,num);
    
    cout << "objectCount : " << Box::objectCount << endl;
    cin.get();
    system("cls");
    
    Place_Box(HEAD);
    Sleep(3000);
    //Waiting for Swap
    default_random_engine rand_num{static_cast<long unsigned int>(chrono::high_resolution_clock::now().time_since_epoch().count())};
    uniform_int_distribution<> range{0,Box::objectCount};
    Box *ch1 = HEAD, *ch2 = HEAD;

    //Call Delete to every Box that created before return result

    Box::objectCount = 0; //Reset objectCount after each stage end
    return 1; //If player passed
}

void Create_Box(Box *&HEAD, int num) {
    //Create Linked List of Box
    default_random_engine rand_num{static_cast<long unsigned int>(chrono::high_resolution_clock::now().time_since_epoch().count())};
    bool key = false; //Checked If key generated
    while (Box::objectCount < num) {
        if (!HEAD) {
            bool check = false;
            if (!key) {
                uniform_int_distribution<> range{Box::objectCount,num-1};
                if (range(rand_num) == num-1) check = true;
            }
            if (check) {
                HEAD = new Key;
                key = true;
            }
            else HEAD = new Ney;
        }
        else {
            bool check = false;
            Box *walker = HEAD;
            while (walker->next) walker = walker->next;
            if (!key) {
                uniform_int_distribution<> range{Box::objectCount,num-1};
                if (range(rand_num) == num-1) check = true;
            }
            if (check) {
                walker->append(new Key);
                key = true;
            } 
            else walker->append(new Ney);
            //Circle Linked List
            if (Box::objectCount == num) {
                if (walker->next) walker = walker->next;
                walker->next = HEAD;
                HEAD->prev = walker;
            }
        }
    }
}

void Place_Box(Box *HEAD) {
    Box *t = HEAD;
    int placed = 0;
    //Initial Position
    int x = 5;
    int y = 5;
    while (placed < Box::objectCount) {
        t->draw(x,y);
        t = t->next;
        //Moving Position
        x += 10;
        //y += 0;
        placed++;
    }
}