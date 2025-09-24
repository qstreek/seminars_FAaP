#include <iostream>
int main() {
    int num1;
    std::cout << "Vozrost: ";
    std::cin >> num1;
    if (num1 < 18 && num1 > 0)
        std::cout << "Men`she 18.";
    else if (num1 >= 18 && num1 <= 60)
        std::cout << "Ot 18 do 60";
    else if (num1 > 60)
        std::cout << "Bol`she 60";
    else
        std::cout << "Takogo vozrasta ne mojet bit`!";
    return 0;
}
