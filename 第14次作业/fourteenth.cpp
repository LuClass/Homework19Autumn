//附加题
#include <iostream>

using namespace std;
char a[1 << 10];

int main() {
	cin.getline(a, 51);
	cout << a << endl;
	for (int i = 0; i < 51 && a[i] != '\0'; ++i) {
		if ('A' <= a[i] && a[i] <= 'Z') {
			a[i] += 'a' - 'A';
		}
	}
	cout << a << endl;
	return 0;
}



//14 1  2
//14(1)
#include <iostream>
#include <cmath>
using namespace std;

struct X {
	double x1 = 0, x2 = 0;
	bool hasX = false;
};

X solve(int a, int b, int c) {
	X x;
	double delta = b * b - 4.0 * a * c;
	if (delta >= 0) {
		x.hasX = true;
		x.x1 = (-b + sqrt(delta) )/ (a << 1);
		x.x2 = (-b - sqrt(delta)) / (a << 1);
	}
	return x;
}
int main() {
	int a = 1, b =4, c = 1;
	X x = solve(a, b, c);
	if (x.hasX)cout << x.x1 << " " << x.x2 << endl;
	return 0;
}



//14(2)
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
	int x, y;
	Point() { x = 0, y = 0; }
	Point(int x_, int y_) { x = x_; y = y_; }
};

struct Triangle{
	Point a, b, c;
	Triangle(Point a_, Point b_, Point c_) :a(a_), b(b_), c(c_){}
	double edgeAB, edgeAC, edgeBC;
	double tmp[3];
	bool isTriangle() {
		getDistance();
		sort(tmp,tmp+3);
		if (tmp[0] + tmp[1] > tmp[2])return true;
		return false;

	}
	void getDistance() {
		tmp[0] = edgeAB = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
		tmp[1] = edgeAC = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
		tmp[2] = edgeBC = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
	}
	double getPerimeter() {
		return edgeAB + edgeAC + edgeBC;
	}
};

int main() {
	Triangle* T = new Triangle(Point(0, 0), Point(3, 0), Point(3, 4));
	if (T->isTriangle())cout << "Perimeter:" << T->getPerimeter() << endl;
	return 0;
}
