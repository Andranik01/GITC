#include "iostream"
#include "show_struct.h"

void show_struct (Position *u) {
    std::cout << "Office: " << u -> office << std::endl;
    std::cout << "Language 1: " << u -> languages[0] << std::endl;
    std::cout << "Language 2: " << u -> languages[1] << std::endl;
    std::cout << "programmer age: " << u -> programmer.age << std::endl;
    std::cout << "Lvl: " << u -> programmer.lvl << std::endl;
}