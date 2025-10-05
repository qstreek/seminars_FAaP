#include <iostream>
#include <vector>

using namespace std;

int gde(int x1, int y1, int x2, int y2, int x3, int y3) {
	double value = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2);
	if (value == 0)
		return 0;      // na odnoy priamoy
	else if (value > 0)
		return(1);
	else
		return(-1);   // 1 - x3y3 sprava, -1 - x3y3 sleva
}
bool kollin(int x1, int y1, int x2, int y2, int x3, int y3) {
	return(x3 <= max(x1, x2) && x3 >= min(x1, x2) && y3 <= max(y1, y2) && y3 >= min(y1, y2));
}
bool peresech(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
	int o1 = gde(x1, y1, x2, y2, x3, y3);
	int o2 = gde(x1, y1, x2, y2, x4, y4);
	int o3 = gde(x3, y3, x4, y4, x1, y1);
	int o4 = gde(x3, y3, x4, y4, x2, y2);
	if (o1 != o2 && o3 != o4)
		return true;
	if (o1 == 0 && kollin(x1, y1, x2, y2, x3, y3))
		return true;
	if (o2 == 0 && kollin(x1, y1, x2, y2, x4, y4))
		return true;
	if (o3 == 0 && kollin(x3, y3, x4, y4, x1, y1))
		return true;
	if (o4 == 0 && kollin(x3, y3, x4, y4, x2, y2))
		return true;
	return false;
}
int main(){
	int result = 0;
	int n;
	int two = 2;
	cout << "kol-vo vershin(!!! n > 2 !!!): ";
	cin >> n;
	vector<vector<int>> coord(n, vector<int>(two));
	cout << endl << "Vvodim coord mnogougolnika:" << endl << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < two; j++) {
			if (j == 0)
				cout << "X" << i + 1 << " = ";
			else
				cout << "Y" << i + 1 << " = ";
			cin >> coord[i][j];
		}
	}
	int point1[2];
	int point2[2];
	cout << endl << "Coord tochki:" << endl << endl;
	cout << "Vvedite X0: ";
	cin >> point1[0];
	cout << "Vvedite Y0: ";
	cin >> point1[1];
	point2[0] = point1[0];
	point2[1] = 1000000;
	if (n > 2) {
		for (int i = 0; i < n - 1; i++) {
			if (peresech(coord[i][0], coord[i][1], coord[i + 1][0], coord[i + 1][1], point1[0], point1[1], point2[0], point2[1])) {
				if (gde(coord[i][0], coord[i][1], coord[i + 1][0], coord[i + 1][1], point1[0], point1[1]) == 0) {
					if (kollin(coord[i][0], coord[i][1], coord[i + 1][0], coord[i + 1][1], point1[0], point1[1]))
						result += 1;
				}
				else
					result += 1;
			}
		}
		if (result % 2 != 0)
			cout << "Vnutri!";
		else
			cout << "Snaruji";
	}
	else
		cout << "n nado > 2!";
}