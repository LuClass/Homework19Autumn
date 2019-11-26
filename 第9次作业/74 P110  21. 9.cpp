#include <iostream>
#include <math.h>
using namespace std;
#define s (a+b+c)/2
int main() {
	int a,b,c,area;
	cin>>a>>b>>c;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"area="<<area<<endl;
	return 0;

}
