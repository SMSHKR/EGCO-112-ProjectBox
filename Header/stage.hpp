#ifndef STAGE_HPP_INCLUDED 
#define STAGE_HPP_INCLUDED

#include <cstdlib>
#include <time.h>
#include "box.hpp"

bool stage(int num, Box *&HEAD, Box *&t) {
    srand(time(NULL));
    bool key = false;
    if (!HEAD) {
        int check = rand()%2; //0, 1
        if (check == 0)
            HEAD = new Box(false);
        else {
            HEAD = new Box(true);

        }
    }
}

#endif // STAGE_HPP_INCLUDED