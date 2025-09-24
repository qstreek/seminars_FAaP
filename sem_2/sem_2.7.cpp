#include <iostream>
int main() {
    int n;
    std::cout << "Chislo: ";
    std::cin >> n;
    if (n > 0) {
        for (int i = 1; i < n + 1; i++) {
            std::cout << i * i << std::endl;
        }
    }
    else
        std::cout << "Chislo doljno bit` > 0!!!";
    return 0;
}
