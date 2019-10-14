#include <iostream>;
using namespace std;
int main() {
	cout << "前二十项，并显示每一项分母和分子。" << endl;
	int a = 2, b = 1;
	cout << a << "/" << b<<endl;
	for (int c = 1, n = 1; n <= 20; n++) {
		c = b;
		b = a;
		a = c + b;
		cout << a << "/"  << b <<  endl;
	}
	return 0;
}