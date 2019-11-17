#include<iostream>
#include<math.h>
using namespace std;
struct Point {
	int x, y;
};
Point p1, p2;
double func(Point p1, Point p2) {
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
struct pro {
	Point a, b, c;
	double a1, a2, a3;
};
pro san = {};
int main() {
	cin >> san.a.x>> san.a.y>> san.b.x>> san.b.y>> san.c.x>> san.c.y;
	san.a1 = func(san.a, san.b);
	san.a2 = func(san.a, san.c);
	san.a3 = func(san.c, san.b);
	double c = (san.a1 + san.a2 + san.a3)/2;
	if ((san.a1 + san.a2 > san.a3) && (san.a1 + san.a3 > san.a2) && (san.a3 + san.a2 > san.a1)) {
		cout << "true"<<endl;
		cout <<2*c<<endl;
		cout << c * (c - san.a1) * (c - san.a2) * (c - san.a3) << endl;

	}
	else
		cout << "false"<<endl;
	return 0;
}