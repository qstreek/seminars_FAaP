#include <iostream>
using namespace std;

int main() {
    int const n = 10;
    int max = -1000000;
    int min = 1000000;
    int imax;
    int imin;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Vvedite " << i + 1 << " element: ";
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
            imax = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            imin = i;
        }
    }
    if (imin == 5 - 1 && imax == 10 - 1)
        cout << "Sred. arefm.: " << (min + max) / 2;
    else
        cout << "No";
}   