#include <iostream>
using namespace std;

int main() {
    int const n = 15;
    float max = -1000000;
    float min = 1000000;
    int imax;
    int imin;
    float arr[n];
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
    cout << "Masiv: ";
    if (imin == 2 - 1 && imax == 1 - 1) {
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] / 2;
            if (i != n - 1) {
                cout << arr[i] << "; ";
            }
            else {
                cout << arr[i];
            }
        }
    }
    else
        cout << "No";
}