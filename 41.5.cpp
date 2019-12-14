#include<iostream>
using namespace std;
int main() {
	char a[50] = {};
	int b[50] = {};
	int sum = 0;
	cin >> a;
	for (int i = 0,k=0; a[i]; i++,k++) {
		if (a[i] >= '0' && a[i] <= '9') {
			cout << a[i] << ' '; b[k] = 1;
			for (int j = i + 1; a[j]; j++) {
				if (a[j] >= '0' && a[j] <= '9') {
					b[k]++; i = j; cout << a[j] << ' ';
				}
				else break;
			}
		}
	}
	for (auto y : b) {
		if (y != 0) { sum += y; }
	}
	cout << '\n'<<sum << endl;

}