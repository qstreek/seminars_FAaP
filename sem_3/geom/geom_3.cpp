#include <iostream>
#include <vector>
using namespace std;

int main() {
	float cx = 0, cy = 0;
	int x = 3, y = 2;
	vector<vector<float>> coord(x, vector<float>(y));
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (j == 0)
				cout << "X" << i + 1 << " = ";
			else
				cout << "Y" << i + 1 << " = ";
			cin >> coord[i][j];
		}
	}
	cx = (coord[0][0] + coord[1][0] + coord[2][0]) / 3;
	cy = (coord[0][1] + coord[1][1] + coord[2][1]) / 3;
	cout << "Cx = " << cx << endl << "Cy = " << cy;
}