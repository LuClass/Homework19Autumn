using namespace std;
#include<iostream>
#include<math.h>
int main()
{
	float area,s,a,b,c;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<area<<endl;
	return 0;
}
