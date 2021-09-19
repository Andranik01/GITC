#include "user.h"
#include "show_struct.h"


int main() {

    Position john;

    john.programmer.age = 21;
    john.programmer.lvl = "junior";
    john.languages[0] = "C++";
    john.languages[1] = "Python";
    john.office = "Lav office";

    show_struct(&john);

    return 0;
}
