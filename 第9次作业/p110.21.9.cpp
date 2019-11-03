#include<iostream>
#include<math.h>
using namespace std;
double func(double a, double b, double c);
#define NAME "area = "
#define S(a,b,c) (a+b+c)/2
#define AREA(a,b,c) sqrt((S(a,b,c))*((S(a,b,c))-(a))*((S(a,b,c))-(b))*((S(a,b,c))-(c)))
int main() {
	double a = 0, b = 0,c = 0;
	cin >> a >> b >> c;
	S(a, b, c);
	cout << NAME << AREA(a, b, c) << endl;                             //ºê
	cout << func(a, b, c);
}
double func(double a, double b, double c) {                            //º¯Êý
	double s = 0;
	s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}