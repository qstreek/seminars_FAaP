#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Vvedite razmer matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    int top = 0, bot = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        
        for (int j = left; j <= right; j++) {
            matrix[top][j] = num++;
        }
        top++;

        for (int i = top; i <= bot; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int j = right; j >= left; j--) {
            matrix[bot][j] = num++;
        }
        bot--;

        for (int i = bot; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}