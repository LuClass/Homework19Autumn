#include <iostream>
#include <math.h>
using namespace std;
#define S(a,b,c) (a+b+c)/2.0
#define AREA(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))
int main(){
	double a,b,c;
	cout<<"请输入三角形三条边长：";
	cin>>a>>b>>c;
	cout<<"面积为："<<AREA(a,b,c);
	return 0;
}
