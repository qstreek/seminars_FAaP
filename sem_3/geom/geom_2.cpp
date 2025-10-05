#include <iostream>
#include <vector>
using namespace std;

int main() {
	int one = 4, two = 2;
	float p = 0;
	vector<vector<float>> coord(one, vector<float>(two));
	for (int i = 0; i < one; i++) {
		for (int j = 0; j < two; j++) {
			if (j == 0)
				cout << "X" << i + 1 << " = ";
			else
				cout << "Y" << i + 1 << " = ";
			cin >> coord[i][j];
		}
	}
	p = pow((pow(coord[1][0] - coord[0][0], 2) + pow(coord[1][1] - coord[0][1], 2)), 0.5) + pow((pow(coord[2][0] - coord[1][0], 2) + pow(coord[2][1] - coord[1][1], 2)), 0.5) + pow((pow(coord[3][0] - coord[2][0], 2) + pow(coord[3][1] - coord[2][1], 2)), 0.5) + pow((pow(coord[4][0] - coord[0][0], 2) + pow(coord[4][1] - coord[0][1], 2)), 0.5);
	cout << p;
}