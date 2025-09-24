#include <iostream>
#include <vector>
int main() {
    int n;
    int k = 0;
    std::cout << "Vvedite kol-vo simvolov: ";
    std::cin >> n;
    std::vector <char> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Vvedite " << i + 1 << " simvol: ";
        std::cin >> arr[i];
        if (arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'u' || arr[i] == 'U' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'a' || arr[i] == 'A')
            k += 1;
    }
    std::cout << k << " glasnih";
    
    return 0;
}
