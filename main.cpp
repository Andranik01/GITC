#include "iostream"

class Animals {


    std::string type;

public:
    int eye = 2;

    std::string get_type() {
        return this -> type;
    }

    void set_type(std::string t) {
        this -> type = t;
    }

};

class Dog : public Animals {

    int age;
    std::string name;

public:

    void set_name(std::string n) {
        this -> name = n;
    }

    std::string get_name() {
        return this -> name;
    }

    void print_aye() {
        std::cout << "Dog eye: " << this -> eye << std::endl;
    }
};

class Test : public Dog {
    int x;
};

int main() {

    Dog test;

    Test a;

    test.set_name("Bac");

    test.set_type("Dog");

    std::cout << "Dog name: " << test.get_name() << std::endl;

    test.print_aye();

    std::cout << "Animal type:  " << test.get_type() << std::endl;

    std::cout << "A print: ";
    a.print_aye();

    return 0;
}