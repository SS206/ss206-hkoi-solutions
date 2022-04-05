#include<iostream>
using namespace std;

int main4() {
	int date1[3], date2[3];
	char first = '1';
	bool same = true;
	for (int i = 0; i < 3; i++)
	{
		cin >> date1[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> date2[i];
	}
	for (int i = 0; i < 3; i++) {
		if (date1[i] != date2[i]) {
			same = false; 
			if (date1[i] < date2[i])
				first = '1';
			else if (date1[i] > date2[i])
				first = '2';
			break;
		}
	}
	if (same)
		cout << "Same";
	else if (first == '1')
		cout << "Before";
	else
		cout << "After";
	return 0;
}