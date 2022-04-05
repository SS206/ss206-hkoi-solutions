#include <iostream>
#include <iomanip>
using namespace std;

int mainD402() {
	int count, num, i, j;
	float sum = 0;
	cin >> count;
	string* list_id = new string[count];
	float* list_p = new float[count]{0};

	for (i = 0; i < count; i++) {
		cin >> list_id[i];
		cin >> list_p[i];
	}

	cin >> num;
	string tmp;
	for (i = 0; i < num; i++) {
		cin >> tmp;
		for (j = 0; j < count; j++) {
			if (tmp == list_id[j])
				sum += list_p[j];
		}
	}

	cout << setprecision(1) << fixed << sum; 
	return 0;
}