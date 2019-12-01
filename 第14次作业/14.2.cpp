#include<iostream>
#include<math.h>
using namespace std;
struct Point{
	int x;
	int y;
};
double distance(Point a, Point b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
struct Triangle{
	Point a;
	Point b;
	Point c;
};
bool isTriangle(Triangle t){
	double a1 = distance(t.a, t.b);
	double a2 = distance(t.a, t.c);
	double a3 = distance(t.b, t.c);
	double m = 0;
	double max = (m = a1 > a2 ? a1 : a2) < a3 ? a3 : m;
	if ((a1 + a2 + a3) > 2 * max)
		return 1;
	return 0;
}
double perimeter(Triangle t){
	return distance(t.a, t.b) + distance(t.a, t.c) + distance(t.b, t.c);
}
double area(Triangle t){
	double b1 = distance(t.a, t.b);
	double b2 = distance(t.a, t.c);
	double b3 = distance(t.b, t.c);
	double n = (b1 + b2 + b3) / 2;
	return sqrt(n * (n - b1) * (n - b2) * (n - b3));
}
int main(){
	Point a = { 1,1 }, b = { 1,5 };
	cout << distance(a, b) << endl;
	Point c = { 5,1 };
	Triangle tri = { a,b,c };
	if (!isTriangle(tri))
		cout << "不能构成三角形" << endl;
	else{
		cout << "能构成三角形" << endl;
		cout << "周长:" << perimeter(tri) << endl;
		cout << "面积:" << area(tri) << endl;
	}
}
