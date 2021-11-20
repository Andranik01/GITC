#include "iostream"

void test (char type, int num1, int num2) {

    switch(type) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
           std::cout << num1 << " - " << num2 << " = " << num1 - num2;
           break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '*':
              std::cout << num1 << " * " << num2 << " = " << num1 * num2;
              break;
        default:
            std::cout << "Invalid symbol\n";
            break;
    }

}

void init_params() {
    int num1 = 0, num2 = 0;
    char type;

    std::cout << "num1:";
    std::cin >> num1 ;

    std::cout << "num2:";
    std::cin >> num2;

    std::cout << "Type:";
    std::cin >> type;

    test(type, num1, num2);
}

int main() {

    init_params();


    return 0;
}