#include <iostream>
using namespace std;

int main() {
    float s;
    int const n = 6;
    float arr[n];

    cout << "Vvedite x1: ";
    cin >> arr[0];
    cout << "Vvedite y1: ";
    cin >> arr[1];
    cout << "Vvedite x2: ";
    cin >> arr[2];
    cout << "Vvedite y2: ";
    cin >> arr[3];
    cout << "Vvedite x3: ";
    cin >> arr[4];
    cout << "Vvedite y3: ";
    cin >> arr[5];

    s = 0.5 * (arr[0] * (arr[3] - arr[5]) + arr[2] * (arr[5] - arr[1]) + arr[4] * (arr[1] - arr[3]));
    if (s > 0)
        cout << "Ploshad` = " << s;
    else if (s < 0)
        cout << "Ploshad` = " << -1 * s;
    else
        cout << "Odinakovie tochki";
}