#include<iostream>
using namespace std;
int main() {
	cout << "输入两个正整数m和n，求其最大公约数和最小公倍数。" << endl;
	cout << "m,n:";
	unsigned long m = 1, n = 1, c = 1, d = 1;
	cin >> m >> n;
	for (int a = 1; a <= m; a++) {
		if (m % a == 0) {
			if (a <= n) {
				if (n % a == 0) {
					c = a;
				}
			}
		}
	}
	for (int b = m;; b++) {
		if (b%m == 0) {
			if (b>=n) {
				if (b % n == 0) {
					d = b;
					break;
				}
			}
		}
	}
	cout << "最大公约数:" << c << endl;
	cout << "最大公倍数:" << d << endl;
	return 0;

}