#include <iostream>
using namespace std;

int main() {
    int  const n = 15;
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
    arr[imin] = arr[0];
    arr[0] = min;
    arr[imax] = arr[n - 1];
    arr[n - 1] = max;
    cout << "Masiv: ";
    if (max == 0 || min == 0) {
        for (int i = 0; i <= imin; i++) {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << arr[i] << "; ";
        }
        else {
            cout << arr[i];
        }
    }
}