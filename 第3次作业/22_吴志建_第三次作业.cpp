#include<iostream>
#include<cmath>
using namespace std;

//(1)
int main()
{
	int n, i;
	int a[1000];
	while (cin >> n)
	{
		i = 0;
		while (n != 0)
		{
			a[i] = n % 2;
			i++;
			n /= 2;
		}
		for (int j = i - 1; j >= 0; j--)
			cout << a[j];
		cout << endl;
	}
	return 0;
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