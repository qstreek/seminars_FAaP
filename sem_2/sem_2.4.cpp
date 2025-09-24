#include <iostream>
int main() {
    int num1;
    std::cout << "Vvedite chislo: ";
    std::cin >> num1;
    if (num1 % 2 == 0)
        std::cout << "Chetnoe.";
    else
        std::cout << "Nechetnoe.";
    return 0;
}
