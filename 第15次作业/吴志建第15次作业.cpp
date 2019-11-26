#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}
struct Fraction
{
	int a, b;
	Fraction(int a1, int b1) :a(a1), b(b1)
	{
		if (a == 0)
		{
			b = 1;
			return;
		}
		int gcd = GCD(a1, b1);
		a /= gcd;
		b /= gcd;
	}
	void print()
	{
		cout << "(" << a << "/" << b << ")";
	}
};

bool equal (Fraction* f1, Fraction* f2)
{
	return fabs((double)f1->a / f1->b - (double)f2->a / f2->b) < 1e-8;		
}
bool greater_than (Fraction* f1, Fraction* f2)
{
	return (double)f1->a / f1->b > (double)f2->a / f2->b;
}
bool less_than (Fraction* f1, Fraction* f2)
{
	return(double)f1->a / f1->b < (double)f2->a / f2->b;
}
Fraction plus1 (Fraction* f1, Fraction* f2)
{
	return Fraction(f1->a * f2->b + f1->b * f2->a, f1->b * f2->b);
}
Fraction minus1 (Fraction* f1, Fraction* f2)
{
	return Fraction(f1->a * f2->b - f1->b * f2->a, f1->b * f2->b);
}
Fraction multiple1(Fraction* f1, Fraction* f2)
{
	return Fraction(f1->a * f2->a, f1->b * f2->b);
}
Fraction divide1(Fraction* f1, Fraction* f2)
{
	if (f2->a == 0)
		throw "denominator is zero";
	return Fraction(f1->a * f2->b, f1->b * f2->a);
}

struct Course
{
	string couID, couName;
	TestWay testWay;
};
enum TestWay{markSys,gradingSys};
union Grade
{
	string level;
	double num;
};
struct stuGrade
{
	string stuID, stuName, couID;
	Grade couGrade;
};

int main()
{
	Fraction f1(2, 4);
	Fraction f2(3, 5);
	Fraction* f11 = &f1;
	Fraction* f22 = &f2;
	cout << f11->a << " " << f11->b << endl;
	cout << f22->a << " " << f22->b << endl;
	cout << "相等：" << equal(f11, f22) << endl;
	cout << "大于：" << greater_than(f11, f22) << endl;
	cout << "小于：" << less_than(f11, f22) << endl;
	Fraction* f3 = &plus1(f11, f22);
	cout << "加：" << f3->a << "/" << f3->b << endl;
	Fraction* f4 = &minus1(f11, f22);
	cout << "减：" << f4->a << "/" << f4->b << endl;
	Fraction* f5 = &multiple1(f11, f22);
	cout << "乘：" << f5->a << "/" << f5->b << endl;
	Fraction* f6 = &divide1(f11, f22);
	cout << "除：" << f6->a << "/" << f6->b << endl;
	return 0;
}