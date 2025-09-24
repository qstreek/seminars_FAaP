#include <iostream>
int main() {
    int num1;
    std::cout << "Chislo: ";
    std::cin >> num1;
    if (num1 % 15 == 0)
        std::cout << "Delitsia na 15.";
    else if (num1 % 5 == 0 && num1 % 3 != 0)
        std::cout << " Delitsia na 5.";
    else if (num1 % 3 == 0 && num1 % 5 != 0)
        std::cout << "Delitsia na 3.";
    else
        std::cout << "Ne delitsia ni na 3 ni na 5.";
    return 0;
}
