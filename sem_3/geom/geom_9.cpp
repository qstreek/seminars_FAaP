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
int main() {
	int result = 0;
	int n1;
	int n2;
	int two = 2;
	cout << "kol-vo vershin(!!! n > 2 !!!) 1: ";
	cin >> n1;
	cout << "kol-vo vershin(!!! n > 2 !!!) 2: ";
	cin >> n2;
	vector<vector<int>> coord1(n1, vector<int>(two));
	vector<vector<int>> coord2(n2, vector<int>(two));
	cout << endl << "Vvodim coord 1 mnogougolnika:" << endl << endl;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < two; j++) {
			if (j == 0)
				cout << "X" << i + 1 << " = ";
			else
				cout << "Y" << i + 1 << " = ";
			cin >> coord1[i][j];
		}
	}
	cout << endl << "Vvodim coord 2 mnogougolnika:" << endl << endl;
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < two; j++) {
			if (j == 0)
				cout << "X" << i + 1 << " = ";
			else
				cout << "Y" << i + 1 << " = ";
			cin >> coord2[i][j];
		}
	}
	if (n1 > 2 && n2 > 2) {
		for (int i = 0; i < n1 - 1; i++) {
			for (int j = 0; j < n2 - 1; j++) {
				if (peresech(coord1[i][0], coord1[i][1], coord1[i + 1][0], coord1[i + 1][1], coord2[j][0], coord2[j][1], coord2[j + 1][0], coord2[j + 1][1]))
					result += 1;
			}
		}
		if (result > 0)
			cout << "Peresekautsia!";
		else
			cout << "Ne peresekautsia";
	}
	else
		cout << "n nado > 2!";
}