#include <iostream>
#include <vector>
using namespace std;

int main() {
	int one = 3, two = 2;
	float d = 0;
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
	d = (coord[1][0] - coord[0][0]) * (coord[2][1] - coord[0][1]) - (coord[1][1] - coord[0][1]) * (coord[2][0] - coord[0][0]);
	if (d == 0)
		cout << "Tochki na odnoy priamoy";
	else
		cout << "Tochki ne na odnoy priamoy";
}