//918107820336  36郑文浩 第三次作业 
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;                    //第一小题 
	cin >> num;
	for (int i = 31; i >= 0; i--) {
		cout << (num >> i & 1);
	}
	cout << endl;
	
	int a, b, c;               //第六小题 
	cout << "ax^2+bx+c=0" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
	int s = b * b - 4 * a*c;
	if (s < 0)
		cout << "此方程无实根" << endl;
	else if (s == 0)
		cout << "此方程有唯一的实根:" << -b / (2 * a);
	else
		cout << "此方程有两实根" << (-b + sqrt(s)) / (2 * a) << "," << (-b - sqrt(s)) / (2 * a)<< endl;
	return 0;
}
