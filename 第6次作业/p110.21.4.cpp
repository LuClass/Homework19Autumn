#include<iostream>
#include<iomanip>
using namespace std;
bool func(int a);
int main() {
	cout << "输出500以内的孪生素数。" << endl;
	for (int a = 2; a < 498; a++) {
		if (func(a)) {
			if (func(a + 2)) {
				cout << setw(3) << a << "  " << setw(3) << a + 2 << endl;
			}
		}
	}
	return 0;
}
bool func(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0)
			return 0;
	}
	return 1;
}