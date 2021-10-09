#include "iostream"

class Test {
    int esim = 0;

   int get_esim(){
       return this -> esim;
    }

protected:
    void print_data() {
        std::cout << "Data" << std::endl;
    }

public:
    void print_ok(int a, int b){
        if(b % 2 == 0){
            this -> esim = b * b;
        }
        else {
            this -> esim = (b - 1) * (b - 1);
        }
        for( ; a <= b; a++) {
            if( a != this -> esim ) {
                std::cout << a * a << " ";
            }

        }
    }

    void print_esim() {
        std::cout << "\nEsim = " << get_esim() << std::endl;
    }


};

class User : public Test{
    int age;

    int get_age() {
        return this -> age;
    }

protected:
    void print_data() {
        std::cout << "Data" << std::endl;
    }

public:
    User(int a) {
        this -> age = a;
    }

    void print_age() {
        std::cout << "Age: " << get_age() << std::endl;
        print_data();
    }

    ~User() {
        std::cout << "\nobject User deleted\n" << std::endl;
    }
};

class Human{

    int age, friend_count;

protected:
    void print_friend_count() {
        std::cout << "friend count: " << this -> friend_count << std::endl;
    }

    int get_user_age() {
        return this -> age;
    }

public:
    std::string surname;

    Human(int fr, std::string sr) {
        this -> friend_count = fr;
        this -> surname = sr;
    }

    void print_user_age() {
        std::cout << "User age: " << this -> get_user_age();
    }

    ~Human(){
        std::cout << "Object Human deleted" << std::endl;
    }

};

int main() {

   User user1(21);

   user1.print_ok(5, 9);

   user1.print_esim();

    return 0;
}