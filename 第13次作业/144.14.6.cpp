#include<iostream>
#include<string.h>
using namespace std;
int getrev(char a[]) {
	int n = strlen(a),k=0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				k++;
			}
		}

	}
	return k;
}
int main() {
	char a1[10]; char b[4][20],temp[20];
	cin.getline(a1, 10);
	cout << getrev(a1) << '\n' << "第二小问：" << endl;
#define MAX 3
	for (int i = 0; i <= MAX-1; i++) {
		cin.getline(b[i], 20);
	}
	for (int i = 0; i <= MAX - 1; i++) {
		for (int j = i + 1; j < MAX; j++) {
			if (getrev(b[i]) > getrev(b[j])) {
				strcpy_s(temp, b[i]);
				strcpy_s(b[i],b[j] );
				strcpy_s(b[j],temp);
			}
		}
		cout << getrev(b[i]) << ":" << b[i] << endl;
	}
	return 0;
}