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

    cout << "Vvod matrix" << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "stroka " << i << ", stolb " << j << ": ";
            cin >> matrix[i][j];
        }
    }

    vector<int> rowMin(n, 1000000);   
    vector<int> rowMax(n, -1000000);    
    vector<int> colMin(m, 1000000);   
    vector<int> colMax(m, -1000000); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < rowMin[i]) {
                rowMin[i] = matrix[i][j];
            }
            if (matrix[i][j] > rowMax[i]) {
                rowMax[i] = matrix[i][j];
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] < colMin[j]) {
                colMin[j] = matrix[i][j];
            }
            if (matrix[i][j] > colMax[j]) {
                colMax[j] = matrix[i][j];
            }
        }
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
                cout << "A: " << "Chislo = " << matrix[i][j] << "; " << "stroka " << i + 1 << ", stolb " << j + 1 << endl;
                found = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == rowMax[i] && matrix[i][j] == colMin[j]) {
                cout << "B: " << "Chislo = " << matrix[i][j] << "; " << "stroka " << i + 1 << ", stolb " << j + 1 << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << " N O N E" << endl;
    }

    return 0;
}