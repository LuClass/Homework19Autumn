#include<iostream>
using namespace std;
int func1(int m, int n);
int func2(int m, int n);
int main() {
	cout << "输入两个正整数m和n，求其最大公约数和最小公倍数。" << endl;
	cout << "m,n:";
	unsigned long m = 1, n = 1, c = 1, d = 1;
	cin >> m >> n;
	cout << "最大公约数:" << func1(m, n) << endl;
	cout << "最小公倍数:" << func2(m, n) << endl;
	return 0;
}
int func1(int m, int n) {
	int c = 1;
	for (int a = 1; a <= m; a++) {
		if (m % a == 0) {
			if (a <= n) {
				if (n % a == 0) {
					c = a;
				}
			}
		}
	}
	return c;
}
int func2(int m, int n) {
	int d = 1;
	for (int b = m;; b++) {
		if (b % m == 0) {
			if (b >= n) {
				if (b % n == 0) {
					d = b;
					break;
				}
			}
		}
	}
	return d;
}