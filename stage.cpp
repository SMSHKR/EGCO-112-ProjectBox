#include <cstdlib>
#include <time.h>
#include "Header/box.hpp"

bool stage(int num, Box *&HEAD) {

    srand(time(NULL));

    //Create Linked List of Box
    bool key = false; //Checked If key generated
    int created = 0; //Count Box Generate
    while (created < num) {
        created += 1;
        if (!HEAD) {
            bool check = 0;
            if (!key) {
                if (created == num) check = 1; //Case of NONE of Boxes have key
                else check = rand() % 2; //0, 1
            }
            if (check) {
                HEAD = new Box(true);
                key = true;
            }
            else HEAD = new Box;
        }
        else {
            bool check = 0;
            Box *walker = HEAD;
            while (walker->next) walker = walker->next;
            if (!key) {
                if (created == num) check = 1; //Case of NONE of Boxes have key
                else check = rand() % 2; //0, 1
            }
            if (check) {
                walker->append(new Box(true));
                key = true;
            } 
            else walker->append(new Box); 
        }
    }
}