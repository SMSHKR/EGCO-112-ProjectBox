#include "Header/box.hpp"

int Box::objectCount = 0;

Box::Box(bool value) {
    key = value;
    objectCount++;
}