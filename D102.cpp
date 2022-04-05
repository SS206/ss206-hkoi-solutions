#include <iostream>
#include <string>
using namespace std;

bool line(string* table, char* c) {
	bool checkv = true, checkh = true;
	char cv = table[0][0], ch = table[0][0];
	for (int i = 0; i < 3; i++) {
		cv = table[0][i];
		ch = table[i][0];
		for (int j = 0; j < 3; j++) {
			if (cv == '.' || cv != table[j][i]) {
				checkv = false;
			}
			if (ch == '.' || ch != table[i][j]) {
				checkh = false;
			}
			cv = table[j][i];
			ch = table[i][j];
		}
		if (checkv || checkh) break;
	}
	*c = checkh ? ch : cv;
	return checkv || checkh;
}

bool cross(string* table, char* c) { 
	bool check1 = true, check2 = true;
	char c1 = table[0][0], c2 = table[0][2];
	for (int i = 0; i < 3; i++) { 
		if (c1 == '.' || c1 != table[i][i]) {
			check1 = false; 
		}
		if (c2 == '.' || c2 != table[i][2 - i]) {
			check2 = false;
		}
		c1 = table[i][i];
		c2 = table[i][2 - i];
	} 
	*c = check1 ? c1 : c2;
	return check1 || check2;
}

bool drawCheck(string* table) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (table[i][j] == '.')
				return false;
		}
	}
	return true;
}

int mainD302() {
	string table[3];
	char side = ' ';
	for (int i = 0; i < 3; i++) {
		cin >> table[i];
	}
	if (line(table, &side) || cross(table, &side))
		cout << side << " wins";
	else if (drawCheck(table))
		cout << "Draw";
	else
		cout << "Not ended";
	return 0;
}
