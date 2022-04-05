#include<iostream>
using namespace std;

int main2() {
	string a;
	cin >> a;
	int i = 0;
	while (a[i] != '\0') {
		if ((int)a[i] > 90) {
			a[i] = (char)((int)a[i] - 32);
		}
		i++;
	}
	cout << a;
	return 0;
}