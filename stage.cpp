#include <iostream>
#include <random>
#include <chrono>
#include <conio.h>
#include <windows.h>
#include "Header/box.hpp"
#include "Header/stage.hpp"
#include "Header/legacy.hpp"
using namespace std;

#define KEY_ENTER 13
#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80

bool stage(int num) {

    Box *HEAD = nullptr;
    
    Create_Box(HEAD,num);
    
    Place_Box(HEAD);
    Sleep(100*Box::objectCount);
    Replace_Box(HEAD);
    Sleep(1000);

    default_random_engine rand_num{static_cast<long unsigned int>(chrono::high_resolution_clock::now().time_since_epoch().count())};
    uniform_int_distribution<> range{0,Box::objectCount};
    int SwapCount = Box::objectCount + range(rand_num);
    Swap_Box(HEAD,SwapCount);
    
    Box *pointer = HEAD;
    char input = '\0';
    do {
        pointer->draw_cursor();
        input = getch();
        switch(input) {
            case KEY_RIGHT:
                pointer->move_cursor();
                pointer = pointer->next;
                break;
            case KEY_DOWN:
                pointer->move_cursor();
                for (int i=0; i<5; i++) pointer = pointer->next;
                break;
            case KEY_LEFT:
                pointer->move_cursor();
                pointer = pointer->prev;
                break;
            case KEY_UP:
                pointer->move_cursor();
                for (int i=0; i<5; i++) pointer = pointer->prev;
                break;
        }
    } while (input != KEY_ENTER);

    bool passed = pointer->open();

    Box *destroyer = HEAD;
    while (destroyer) {
        if (Box::objectCount > 1) {
            destroyer = destroyer->next;
            delete destroyer->prev;
            destroyer->prev = nullptr;
        }
        else { 
            delete destroyer;
            destroyer = nullptr;
        }

    }
    
    return passed;
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
                HEAD = new Box(true);
                key = true;
            }
            else HEAD = new Box;
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
                walker->append(new Box(true));
                key = true;
            } 
            else walker->append(new Box);
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
    //Initial Position
    short x = 5;
    short y = 2;
    for (int i=0; i < Box::objectCount; i++) {
        t->setxy(x,y);
        t->draw_color();
        t = t->next;
        //Moving Position
        x += 23;
        if ( (i+1)%5 == 0 && i != 0) {
            x = 5;
            y += 10;
        }
    }
}

void Replace_Box(Box *HEAD) {
    Box *t = HEAD;
    for (int i=0; i<Box::objectCount; i++) {
        t->draw();
        t = t->next;
    }
}

void Swap_Box(Box *HEAD, int count) {
    if (count) {
        
        default_random_engine rand_num{static_cast<long unsigned int>(chrono::high_resolution_clock::now().time_since_epoch().count())};
        uniform_int_distribution<> range{1,Box::objectCount};
        
        Box *ch1 = HEAD, *ch2 = HEAD;
        
        for (int i=1; i<range(rand_num); i++) ch1 = ch1->next;
        do {
            for (int i=1; i<range(rand_num); i++) ch2 = ch2->next;
        } while (ch1 == ch2);
        
        Sleep(300);
        swap(ch1,ch2);
        
        count--;
        Swap_Box(HEAD,count);
    }
}