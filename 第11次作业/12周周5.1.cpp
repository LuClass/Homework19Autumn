#include<iostream>
using namespace std;
int func(int n);
int san(int n);
int main() {
	int i = 0, j = 0;
	cout << "i<j¡£   i,j£º";
	cin >> i >> j;
	if (i >= j)return 0;
	for (int n = i; n != j; n++) {
		if (n == func(n))cout << n << endl;
	}
	return 0;
}
int func(int n) {
	int a = 0;
	for (; n != 0;) {
		a += san(n % 10);
		n /= 10;
	}
	return a;
}
int san(int n) {
	return n * n * n;
}