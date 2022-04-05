#include<iostream>
using namespace std;

int main1() {
	string a, b;
	cin >> a >> b;
	if (a == b) {
		cout << "They are equal.";
	}
	else {
		int i = 0;
		int anum = 0, bnum = 0;
		while (a[i] != '\0' && b[i] != '\0') {
			anum += (int)a[i];
			bnum += (int)b[i];
			i++;
		}
		if (anum < bnum) {
			cout << a << "precades" << b << endl;
		}
		else {
			cout << b << "precades" << a << endl;
		}
	}
	return 0;
}