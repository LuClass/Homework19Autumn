//14(3)
#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int lcm(int a, int b) {
	int tmp = a / gcd(a, b);
	return abs(tmp * b);
}

//CSAPP
//IEEE 754
//https://en.wikipedia.org/wiki/IEEE_754
//https://en.wikipedia.org/wiki/Single-precision_floating-point_format
//https://en.wikipedia.org/wiki/Double-precision_floating-point_format
struct Fraction {
	//a is numerator,b is denominator 
	int a, b;
	Fraction(int a_, int b_):a(a_),b(b_) {
		if (b == 0) { throw "ArithmeticException "; }
		if (a == 0) { b = 1; return; }
		int g = gcd(a_, b_);
		a /= g;
		b /= g;
	}
	bool equles(const Fraction * another){
		int l = lcm(b, another->b);
		return a * (l / a) == another->a * (l / another->a) ;
	}
	Fraction operator+(const Fraction* another) const {
		return Fraction(a * another->b + b * another->a, b * another->b);
	}
	Fraction operator-(const Fraction* another) const {
		return Fraction(a * another->b - b * another->a, b * another->b);
	}
	Fraction operator*(const Fraction* another) const {
		return Fraction(a * another->a, b * another->b);
	}
	Fraction operator/(const Fraction* another) const {
		return Fraction(a * another->b, b * another->a);
	}
	bool operator<(const Fraction* another) const {
		return a * another->b < b * another->a;
	}
	bool operator>(const Fraction* another) const {
		return a * another->b > b * another->a;
	}
};


int main() {
	Fraction x(2, 4);
	Fraction y(2, 7);
	//Fraction q = x.operator+(&y);
	Fraction q = x+&y;
	Fraction w = x.operator-(&y);
	Fraction e = x.operator*(&y);
	Fraction r = x.operator/(&y);
	cout << q.a << " " << q.b << endl;
	cout << w.a << " " << w.b << endl;
	cout << e.a << " " << e.b << endl;
	cout << r.a << " " << r.b << endl;
	if (x > & y)cout << x.a << " " << x.b << endl;
	if (x < &y)cout << y.a << " " << y.b << endl;
	return 0;
}



//14(4)
#include <iostream>
#include <string>
using namespace std;

struct Course {
	int CId;
	string courseName;
};

enum style { percentage, grade };

struct Student {
	int SId;
	string name;
	int CId;
	union CourseStyle
	{
		double percentage;
		char grade;
	};
};
