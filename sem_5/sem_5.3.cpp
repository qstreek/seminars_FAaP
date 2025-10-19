#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers(20);

    for (int i = 0; i < 20; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Ёлементы вектора: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    auto max = max_element(numbers.begin(), numbers.end(),
        [](int a, int b) {
            return a < b;
        }
    );

    cout << "Max znach: " << *max << endl;
    cout << "Pozicia: " << distance(numbers.begin(), max) << endl;

    return 0;
}