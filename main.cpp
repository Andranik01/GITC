#include "iostream"

class Animal {
    std::string name;
    int age;

public:
    Animal(std::string n, int a) {  //constructor
            this -> name = n;
            this -> age = a;
        }

        ~Animal() {                 //destructor
        std::cout << "Fsyo" << std::endl;
    }

       std::string get_name() {
            return this -> name;
        }

       int get_age() {
            return this -> age;
        }
};

class User {
    std::string name;
    int age;

public:

    ~User() {                                //destructor
        std::cout << "End." << std::endl;
    }

    User(int a, std::string n) {            //constructor
        this -> age = a;
        this -> name = n;
    }


    int get_age() {
        return this -> age;
    }

    static void print_name(User* n) {
        std::cout << "User name: " <<  n -> name << std::endl;
    };
};



int main() {

    Animal dog("Tuzik", 2);  //class initialization

    std::cout << "Dog name: " << dog.get_name() << std::endl;
    std::cout << "Dog age: " << dog.get_age() << std::endl;

    User user1(21,"John");   //class initialization

    std::cout << "User age: " << user1.get_age() << std::endl;

    User::print_name(&user1);


    return 0;
}