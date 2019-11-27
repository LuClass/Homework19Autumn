#include<iostream> 
#include<math.h>
using namespace std;

#define s(a,b,c) (a+b+c)/2
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))

int main(){
	double a,b,c;
	cout<<"putin a,b,c:";
	cin>>a>>b>>c;
	cout<<"area="<<area(a,b,c);
	return 0;
}
