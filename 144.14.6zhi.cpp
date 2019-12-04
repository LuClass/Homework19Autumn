#include<iostream>
#include<string.h>
using namespace std;
int getrev(char* a[]) {
	int n = strlen(*a), k = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[0][i] >a[0][j]) {
				k++;
			}
		}

	}
	return k;
}
int main() {
	char a1[1][10] = {}; char b[3][20], temp[20];
	cin.getline(a1[0], 10);
	char* p = a1[0];
	cout << getrev(&p) << '\n' << "第二小问：" << endl;
	char* p1[3] = { b[0],b[1],b[2] };
#define MAX 3
	for (int i = 0; i <= MAX - 1; i++) {
		cin.getline(b[i], 20);
	}
	for (int i = 0; i <= MAX - 1; i++) {
		for (int j = i + 1; j < MAX; j++) {
			if (getrev(&p1[i]) > getrev(&p1[j])) {
				strcpy_s(temp, b[i]);
				strcpy_s(b[i], b[j]);
				strcpy_s(b[j], temp);
			}
		}
		cout << getrev(&p1[i]) << ":" << b[i] << endl;
	}
	return 0;
}