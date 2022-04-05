#include <iostream>
#include <math.h>
using namespace std;
int main0() {
	float x, y, ang;
	float area = 0;
	cin >> x >> y >> ang;
	area = 0.5 * x * y * asin(ang);
	cout << area;
	return 0;
}