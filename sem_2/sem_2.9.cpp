#include <iostream>
int main() {
    int n;
    int sum = 0;
    std::cout << "Kol-vo: ";
    std::cin >> n;
    if (n > 0) {
        for (int i = 1; i < n + 1; i++) {
            if (i % 2 == 0 || i % 5 == 0)
                sum += i;
        }
        std::cout << "Summa: " << sum;
    }
    else
        std::cout << "'Kol-vo' doljno bit` > 0!!!";
    return 0;
}
