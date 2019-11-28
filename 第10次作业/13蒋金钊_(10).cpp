#include<iostream>
using namespace std;
#include<string.h>

int getNum(int a[]) {
	int k = 0;
	for (int i = 1; i < 22; i++) {
		if (a[i] == 0) {
			k++;
		}
	}
	return k;
}

int main() {
	int a[22];
	memset(a, 0 , sizeof(a));
	int k = 0;
	while (getNum(a) != 1) {
		for (int i = 1; i < 22; i++) {
			if (a[i] == 0) {
				k++;
			}
			if (k == 5) {
				a[i] = 1;
				k = 0;
			}
		}
	}
	for (int i = 1; i < 22; i++) {
		if (a[i] == 0) {
			cout << i;
		}
	}
	return 0;
}
