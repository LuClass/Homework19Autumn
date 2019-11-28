#include<iostream>
#include<math.h>
using namespace std;
struct Solution{
    double x1, x2;
};
Solution f(int a, int b, int c){
    Solution x; 
	x.x1=(-b+sqrt(b*b-4*a*c))/2*a;
	x.x2=(-b-sqrt(b*b-4*a*c))/2*a;
	
	return x;
} 

int main()
{
	int a,b,c;
	double x1,x2;
	cin >> a >> b >> c;
	x1=f(a,b,c).x1;
	x2=f(a,b,c).x2;
	cout << x1 <<' '<<x2;

    return 0;
 }

