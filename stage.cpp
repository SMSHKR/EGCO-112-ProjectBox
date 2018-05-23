#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Header/box.hpp"
using namespace std;

//Prototype
void Create_Box(Box*&,int);

bool stage(int num) {

    srand(time(nullptr));
    Box *HEAD = nullptr;
    Create_Box(HEAD,num);
    
    //Actual Game


    //Call Delete to every Box that created before return result

    cout << "objectCount : " << Box::objectCount << endl;
    Box::objectCount = 0; //Reset objectCount after each stage end
    return 1; //If player passed
}

void Create_Box(Box *&HEAD, int num) {
    //Create Linked List of Box
    bool key = false; //Checked If key generated
    while (Box::objectCount < num) {
        if (!HEAD) {
            bool check = 0;
            if (!key) {
                if (Box::objectCount == num) check = 1; //Case of NONE of Boxes have key
                else check = rand() % 2; //0, 1
            }
            if (check) {
                HEAD = new Key;
                key = true;
            }
            else HEAD = new Ney;
        }
        else {
            bool check = 0;
            Box *walker = HEAD;
            while (walker->next) walker = walker->next;
            if (!key) {
                if (Box::objectCount == num) check = 1; //Case of NONE of Boxes have key
                else check = rand() % 2; //0, 1
            }
            if (check) {
                walker->append(new Key);
                key = true;
            } 
            else walker->append(new Ney);
        }
    }
}