#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int mainD503() { 
	const int h = 10, w = 25, bar_w = 3, bar_num = 6;
	//get data
	int i, j, k, values[6]{0};
	for (i = 0; i < bar_num; i++) 
		cin >> values[i];
	//initializing
	char c = ' ';
	char chart[h+2][w+2];
	for (i = 0; i < h + 2; i++) {
		for (j = 0; j < w + 2; j++) {
			if (!(i % (h + 1))) {
				chart[i][j] = !(j % (w + 1)) ? '+' : '-';
				continue;
			}
			chart[i][j] = !(j % (w + 1)) ? '|' : ' ';
		}
	}
	//draw chart
	for (i = 0; i < bar_num; i++) {
		for (j = 0; j < values[i]; j++) {
			for (k = 0; k < bar_w; k++) {
				chart[h - j][i * 4 + 2 + k] = '#';
			}
		}
	}
	//output to file
	ofstream fout;
	fout.open("chart.txt");
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 27; j++) {
			fout << chart[i][j];
		} 
		fout << endl;
	}
	fout.close();
	return 0;
}