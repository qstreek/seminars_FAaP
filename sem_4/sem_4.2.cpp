#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Vvedite razmer matrix: ";
    cin >> n;
    cout << endl;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Stroka " << i << ", stolb " << j << ": ";
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != sum) {
            cout << "NO" << endl;
            return 0;
        }
    }

    int d1Sum = 0;
    for (int i = 0; i < n; i++) {
        d1Sum += matrix[i][i];
    }
    if (d1Sum != sum) {
        cout << "NO" << endl;
        return 0;
    }

    int d2Sum = 0;
    for (int i = 0; i < n; i++) {
        d2Sum += matrix[i][n - 1 - i];
    }
    if (d2Sum != sum) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    cout << sum << endl;

    return 0;
}