#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Kol-vo strok: ";
    cin >> n;
    cout << "Kol-vo stolb: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "stroka " << i << ", stolb " << j << ": ";
            cin >> matrix[i][j];
        }
    }

    int top = 0, bot = n - 1, left = 0, right = m - 1;

    while (top <= bot && left <= right) {
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bot; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bot) {
            for (int j = right; j >= left; j--) {
                cout << matrix[bot][j] << " ";
            }
            bot--;
        }

        if (left <= right) {
            for (int i = bot; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;

    return 0;
}