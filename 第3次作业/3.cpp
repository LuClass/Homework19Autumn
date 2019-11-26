#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
    getchar();
	for (int i = 31; i>=0; --i) {
		b = (a >> i) & 1;
		cout << b;
	}
	getchar();
	return 0;
}

/*下一题
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
    getchar();
	double d = b * b - 4 * a * c;
	double x1, x2;
	if (d > 0) 
	{
		x1 = (-b + sqrt(d)) / 2* a;
		x2 = (-b - sqrt(d)) / 2* a;
		cout << "方程有两根:x1=" << x1 << " x2=" << x2 << endl;
	}
	else if (d < 0)
	{
		cout << "方程无实根";
	}
	else
	{
		x1 = -b / (2.0 * a);
		cout << "方程有一个根 x=" << x1 << endl;
	}
	getchar();
	return 0;
}*/