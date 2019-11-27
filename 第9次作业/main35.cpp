//21(8)
#include <iostream>
int max(int a, int b);
void toHex(int a);

int main()
{
	int a, b;
	std::cin >> a >> b;
	toHex(max(a, b));
	return 0;
}



//21(9)
#include <iostream>
#include <cmath>
#define S ((a+b+c)/2)
#define AREA(a,b,c,S) sqrt(S*(S-a)*(S-b)*(S-c))
using namespace std;

double area(double a, double b, double c) {
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	cout << AREA(a, b, c, S) << endl;
	cout << area(a, b, c) << endl;
	return 0;
}
