#include "iostream"
#include "struct.h"

void show_struct (User *u) {
    std::cout << "User age: " << u -> age << std::endl;
    std::cout << "User height: " << u -> height << std::endl;
}