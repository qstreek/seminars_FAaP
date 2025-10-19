#include <iostream>
#include <vector>

using namespace std;

void print(const vector<vector<int>>& matrix) {
	int n = matrix.size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - 1)
				cout << matrix[i][j] << " ";
			else
				cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl << endl;
}

bool srav(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
	int n = mat1.size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat1[i][j] != mat2[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n;
	cout << "Vvedite razmer matrix: ";
	cin >> n;
	vector<vector<int>> matrix(n, vector<int>(n));

	vector<vector<int>> res1(n, vector<int>(n));
	vector<vector<int>> res2(n, vector<int>(n));
	vector<vector<int>> res3(n, vector<int>(n));
	vector<vector<int>> res4(n, vector<int>(n));
	
	cout << endl << "Zapolnim matrix" << endl;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Stroka " << i << ", stolbez " << j << ": ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res1[i][j] = matrix[j][i];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res2[i][j] = matrix[n - j - 1][n - i - 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res3[i][j] = matrix[i][n - j - 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res4[i][j] = matrix[n - i - 1][j];
		}
	}
	print(res1);
	print(res2);
	print(res3);
	print(res4);

	vector<pair<int, int>> pairs;
	if (srav(res1, res2)) pairs.push_back({ 1, 2 });
	if (srav(res1, res3)) pairs.push_back({ 1, 3 });
	if (srav(res1, res4)) pairs.push_back({ 1, 4 });
	if (srav(res2, res3)) pairs.push_back({ 2, 3 });
	if (srav(res2, res4)) pairs.push_back({ 2, 4 });
	if (srav(res3, res4)) pairs.push_back({ 3, 4 });
	if (pairs.empty())
		cout << " N O N E";
	else {
		for (const auto& p : pairs) {
			cout << "(" << p.first << ", " << p.second << ")" << endl;
		}
	}
}