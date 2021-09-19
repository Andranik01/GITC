#include "iostream"

class User {

     int age = 9;
        double height;
        char name[20];
public:
        int get_age() {
            return this -> age;
        }

        void set_age(int a) {
            this -> age = a;
        }
        static void test() {
            std::cout << this -> age;
        }
};

int main() {

//    User john;
//
//    john.set_age(43);
//
//    int data = john.get_age();
//
//    std::cout << data;

    User::test();


    return 0;
}