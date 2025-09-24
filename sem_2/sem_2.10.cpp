#include <iostream>
int main() {
    int num;
    std::cout << "Vvedite chislo: ";
    std::cin >> num;
    if (num > 0)
        std::cout << "Chislo polojitel`noe";
    else if (num < 0)
        std::cout << "Chislo otrizatel`noe";
    else
        std::cout << "Chislo = 0";
    return 0;
}
