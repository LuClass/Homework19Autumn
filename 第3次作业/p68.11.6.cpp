#include <iostream>
using namespace std;
int main() {
	double a = 1, b = 1, c = 1, d = 1;
	cout << "求一元二次方程:ax^2 + bx + c = 0的根。" << endl;
	cout << "a b c" << endl;
	cin >> a; cin >> b; cin >> c;
	d = b * b - 4 * a * c;
	if (d < 0) {
		cout << "该方程无实数根。" << endl;
	}
	else if (d == 0) {
		cout << "该方程有唯一实数根：x=" << -b / 2 / a << endl;
	}
	else {
		cout << "该方程有两个实数根：x1=" << (-b + d) / 2 / a << "  x2=" << (-b - d) / 2 / a << endl;
	}
	return 0;
}