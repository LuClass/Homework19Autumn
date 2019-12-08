#include<iostream>
#include<string.h>
using namespace std;

int main() {
	int n = 3;
	cout << "n<=10¡£" << endl;
	cin >> n;
	char a[10][20] = {};
	char tem[1][20] = {};
	int i = 0;
	for (; i < n; i++) {
		cin >> a[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int k = 0; a[i][k] != '\0'; k++) {
			cout << a[i][k];
		}
		cout << endl;
	}
	int b[10] = {};
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(a[i], a[j]) < 0) {
				strcpy_s(tem[0], a[i]);
				strcpy_s(a[i], a[j]);
				strcpy_s(a[j], tem[0]);
			}
		}
	}
	cout << endl;
	/*	for (int i = 0; i < n; i++) {
			for (int k = 0; a[i][k] != '-'; k++) {
				cout << a[i][k];
			}
			cout << endl;
		}*/
	for (int i = 0; i < n; i++) {
		int c = 1;
		for (int j = i + 1; j < n; j++) {
			if (strcmp(a[i], a[j]) == 0) {
				c++; i = j;
			}
		}
		b[i] = c;
	}
	int d[10] = {};
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] < b[j]) {
				d[1] = b[i];
				b[i] = b[j];
				b[j] = d[1];
				strcpy_s(tem[0], a[i]);
				strcpy_s(a[i], a[j]);
				strcpy_s(a[j], tem[0]);
			}
		}
		if (b[i] == 0) {
			continue;
		}
		cout << a[i] << ":" << b[i] << endl;
	}
}