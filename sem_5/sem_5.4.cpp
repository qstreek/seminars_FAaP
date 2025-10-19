#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers(10);

    for (int i = 0; i < 10; ++i) {
        cout << i + 1 << " = ";
        cin >> numbers[i];
    }

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    auto res = remove_if(numbers.begin(), numbers.end(),
        [](int num) {
            return num < 0;
        }
    );

    numbers.erase(res, numbers.end());

    cout << "Result: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}