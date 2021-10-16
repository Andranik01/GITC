#include "iostream"

void test(char *l) {
    switch(l[0], l[1]) {
        case 'e': case 'n':
                std::cout << "Hi" << std::endl;
                break;
        case 'h': case 'y':
                std::cout << "Barev" << std::endl;
                break;
        case 'r': case 'u':
                std::cout << "Privet" << std::endl;
                break;
        default:
               std::cout << "Hi" << std::endl;
        }


}






//if(l == "hy") {
//        std::cout << "Barev" << std::endl;
//    }
//    else if (l == "ru") {
//        std::cout << "Privet" << std::endl;
//    }
//    else if (l == "en") {
//        std::cout << "Hello " << std::endl;
//    }
//    else {
//        std::cout << "Hi" << std::endl;
//    }