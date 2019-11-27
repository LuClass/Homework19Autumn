#include<iostream>
#include<cmath>
using namespace std;

//(1)
struct Equation
{
	int a;
	int b;
	int c;
	int delta;
};
Equation f(int a, int b, int c)
{
	Equation e1 = { a,b,c,b * b - 4 * a * c };
	return e1;
}
int main()
{
	//(1)
	int a, b, c;
	cout << "输入a,b,c:";
	cin >> a >> b >> c;
	Equation e1 = f(a, b, c);
	if (e1.delta < 0)
		cout << "无实数解" << endl;
	else if (e1.delta == 0)
		cout << (double)-e1.b / 2 / e1.a << endl;
	else
		cout << (double)(-e1.b + sqrt(e1.delta)) / 2 / e1.a << ", " << (double)(-e1.b - sqrt(e1.delta)) / 2 / e1.a << endl;
	return 0;
}

//(2)
struct Point
{
	int x;
	int y;
};
double distance(Point a, Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
struct Triangle
{
	Point a;
	Point b;
	Point c;
};
bool isTriangle(Triangle tri)
{
	double d1 = distance(tri.a, tri.b);
	double d2 = distance(tri.a, tri.c);
	double d3 = distance(tri.b, tri.c);
	double t = 0;
	double max = (t = d1 > d2 ? d1 : d2) < d3 ? d3 : t;
	if ((d1 + d2 + d3) > 2 * max)
		return true;
	return false;
}
double perimeter(Triangle tri)
{
	return distance(tri.a, tri.b) + distance(tri.a, tri.c) + distance(tri.b, tri.c);
}
double area(Triangle tri)
{
	double d1 = distance(tri.a, tri.b);
	double d2 = distance(tri.a, tri.c);
	double d3 = distance(tri.b, tri.c);
	double p = (d1 + d2 + d3) / 2;
	return sqrt(p * (p - d1) * (p - d2) * (p - d3));
}
int main()
{
	Point a = { 0,1 }, b = { 1,2 };
	cout << distance(a, b) << endl << endl;
	Point c = { 1,1 };
	Triangle tri = { a,b,c };
	if (!isTriangle(tri))
		cout << "NO" << endl;
	else
	{
		cout << "Yes" << endl;
		cout << "周长:" << perimeter(tri) << endl;
		cout << "面积:" << area(tri) << endl;
	}
}

//附加
int main()
{
	char a[50];
	cin.getline(a, 50);
	for (int i = 0; a[i]; i++)
		cout << a[i];
	cout << endl;
	for (int i = 0; a[i]; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = a[i] + 32;
		cout << a[i];
	}
	cout << endl;
	return 0;
}