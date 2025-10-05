#include <iostream>
using namespace std;

int main() {
    int const n = 15;
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
    if (imax < imin)
        cout << "Proizvedenie: " << max * min;
    else
        cout << "Ne predshestvuet(";
}