#include<iostream>
using namespace std;
void func(char* a) {
	for (int i = 0; a[i]; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] - 'A' + 'a';
		}
	}
	return;
}
int main() {
	char a[20] = {};
	char* p = nullptr;
	cin.getline(a, 20);
	p = a;
	func(p);
	for (auto y : a)
		cout << y;
	return 0;
}