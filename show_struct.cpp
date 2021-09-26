#include "struct1.h"

void show_struct(User *u) {
    std::cout <<"User age:" <<u -> age << std::endl<<"User height: "<<u ->height  << std::endl<<"User dog name: " << u -> dog.name<< std::endl << "User dog age: "<<u -> dog.age<< std::endl;
};