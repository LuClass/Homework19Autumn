#include<iostream>
#include<math.h>
using namespace std;
struct pro {
	double a , b ;
};
pro x = { 0,0 };
void f(int  a, int b, int c) {
		x.a = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
		x.b = (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
	return;
}
int main() {
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if ((b * b - 4 * a * c) >= 0) {
		f(a, b, c);
		cout << x.a << endl;
		cout << x.b;
	}
	else
		cout << "�޽⡣";
	return 0;
}