#include <iostream>
#include <cmath>
using namespace std;
int mainD202() {
	int i, n, count = 0;
	cin >> n;
	int s = (int)sqrt(n);
	int arr[1000]{0};

	for (i = 1; i <= s; i++) {
		if (n % i == 0) {
			arr[count] = i;
			count++;
		}
	}

	for (i = 0; i < count; i++) {
		arr[count + i] = n / arr[count - i - 1];
	}

	for (i = 0; i < 999; i++) { 
		if (arr[i] == 0)
			break;
		if (arr[i] == arr[i + 1])
			continue;
		cout << arr[i] << endl;
	}
	return 0;
}