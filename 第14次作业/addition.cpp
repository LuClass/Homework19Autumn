#include<iostream>
using namespace std;
int main() {
	char a[50];
	cin.getline(a, 50);
	cout << a << endl;
	for (int i = 0; a[i]; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 'a' - 'A';
		}
	}
	cout << a;
	return 0;
}