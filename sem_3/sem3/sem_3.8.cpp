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
    cout << "Masiv: ";
    if (imax == 1 || imin == 4) {
        for (int i = imin + 1; i < n; i++) {
            arr[i] = 0;
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
    else
        cout << "No";
}