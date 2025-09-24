#include <iostream>
int main() {
    int num1;
    int num2;
    std::cout << "Dlina: ";
    std::cin >> num1;
    std::cout << "Shirina: ";
    std::cin >> num2;
    if (num1 > 0 && num2 > 0)
        std::cout << "Ploshad`: " << num1 * num2;
    else
        std::cout << "Rasstoianie doljno bit` polojitel`nim";
    return 0;
}