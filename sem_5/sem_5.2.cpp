#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers(10);

    for (int i = 0; i < 10; ++i) {
        cout << "Vvedite chislo " << i + 1 << " : ";
        cin >> numbers[i];
    }

    for_each(numbers.begin(), numbers.end(), [](int num) {
        cout << num * 2 << " ";
        });
    cout << endl;

    return 0;
}