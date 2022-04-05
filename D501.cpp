#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int mainD501() {
	int count = 0; 
	ifstream filein;
	filein.open("account.txt");
	filein >> count; 

	int tmp, balance = 0;
	for (int i = 0; i < count; i++) {
		filein >> tmp;
		balance += tmp;
	}
	balance = max(0, balance);
	filein.close();

	cout << balance;
	return 0;
}
