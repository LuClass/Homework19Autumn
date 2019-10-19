#include <iostream>;
#include<iomanip>;
using namespace std;
int main() {
	cout << "Êä³ö9*9¿Ú¾÷¡£" << endl;
	for (int a = 1; a <= 9; a++) {
		for (int b = 1; b <= a; b++) {
			cout << b << " * " << a << " = " << setw(2) << a * b << "   ";
		}
		cout << endl;
	}

	return 0;
}