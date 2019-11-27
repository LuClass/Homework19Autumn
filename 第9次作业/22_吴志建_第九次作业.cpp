#include<iostream>
#include<cmath>
using namespace std;

//宏
#define AREA(s,a,b,c) sqrt((s) * (a) * (b) * (c))
int main()
{
	double s, a, b, c;
	while (cin >> a >> b >> c)
	{
		s = (a + b + c) / 2;
		cout << "面积 = " << AREA(s, (s - a), (s - b), (s - c)) << endl << endl;
	}
	return 0;
}

//函数
double getArea(double a, double b, double c)
{
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		cout << "面积 = " << getArea(a, b, c) << endl << endl;
	}
	return 0;
}
