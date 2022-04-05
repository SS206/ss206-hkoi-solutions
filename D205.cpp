#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i, j, tmp = n, s = n/2;
	int* arr = new int[s]{0};
	int* pos = arr;
	arr[0] = n;
	for (i = 2; i <= s;i++) {
		if (!(tmp % i)) {
			for (j = 2; j <= i; j++) {
				if (i != j && !(i % j)) {
					i = 1;
					break;
				}
				*pos = i;
				pos++;
				tmp /= i;
				i = 1;
				break;
			}
		} 
	}

	cout << n << '=' << arr[0];
	for (pos = arr + 1; *pos != 0; pos++) cout << '*' << *pos;
}
