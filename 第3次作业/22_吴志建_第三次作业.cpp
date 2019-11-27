#include<iostream>
#include<cmath>
using namespace std;

//(1)
int main()
{
	int n;
	while (cin >> n)
	{
		int i = sizeof(int) * 8 - 1;
		for (; i >= 0; i--)
			cout << ((n >> i) & 1);
		cout << endl;
	}
}

//(6)
int main()
{
	double a, b, c, delta, x1, x2;
	cout << "按顺序输入a,b,c：";
	while (cin >> a >> b >> c)
	{
		delta = b * b - 4 * a * c;
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "两个实根：" << "x1=" << x1 << "，" << "x2=" << x2 << endl;
		}
		else if (fabs(delta - 0.0) <= 1e-6)
			cout << "一个实根：" << "x=" << -b / (2 * a) << endl;
		else
			cout << "无实根" << endl;
		cout << "按顺序输入a,b,c：";
	}
	return 0;
}