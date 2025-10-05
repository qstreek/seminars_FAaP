#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int res = 0;
    int arr[n];
    cout << "Vvedite kol-vo elementov: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Vvedite " << i + 1 << " element: ";
        cin >> arr[i];
        if (arr[i] > pow(2, i + 1))
            res += 1;
    }
    cout << "Result: " << res;
}