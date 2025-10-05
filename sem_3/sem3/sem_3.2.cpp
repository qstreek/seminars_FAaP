#include <iostream>
using namespace std;

int main() {
    int n;
    int max = -1000000;
    int res = 0;
    int arr[n];
    cout << "Vvedite kol-vo elementov: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Vvedite " << i + 1 << " element: ";
        cin >> arr[i];
        if (arr[i] > max && arr[i] % 2 != 0)
            max = arr[i];
        if (arr[i] % 2 == 0)
            res += 1;
    }
    cout << "MAX nechet: " << max << endl << "Kol-vo chet: " << res;
}
