#include "struct1.h"
#include "show_struct.h"

int main() {

    User john;

    john.age = 21;
    john.height = 173;
    john.dog.name ="Bac";
    john.dog.age = 2;

    show_struct(&john);

    return 0;
}