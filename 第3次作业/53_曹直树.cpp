using namespace std;
#include <iostream>
#include <math.h>
int main(void)
//68页(2) 
{
	double a, b, c, x1, x2, d;
	cin >> a;
	cin >> b;
	cin >> c;
	d = b*b - 4.0* a * c;
	x1 = (-b + sqrt(d)) / (2.0*a);
	x2 = (-b - sqrt(d)) / (2.0*a);
	if (d > 0)
		cout << "有两个根" << "x1=" << x1 << endl << "x2=" << x2;
	else if (d == 0)
		cout << "有一个根" << "" << x1;
	     else
		cout << "无根";
	return 0;
}