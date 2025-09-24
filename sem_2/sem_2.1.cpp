#include <iostream>
int main() {
    int num;
    std::cout << "Vvedite dlinu: ";
    std::cin >> num;
    int a = num / 100;
    std::cout << "Metrov: " << a << " Santimetrov: " << num - a * 100;
    return 0;
}