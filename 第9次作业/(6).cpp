//define 
#include<iostream>
#include<math.h>
#define AREA(a,b,c) S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c)
#define S(a,b,c) (a+b+c)/2.0 
using namespace std;

int main(void)
{
	int a,b,c,key=0;
	while (key==0)
	{
		cout<<"please input a,b,c:";
		cin>>a>>b>>c;
		if (a+b<=c||a+c<=b||b+c<=a)
			cout<<"invalid!"<<endl;
		else
			key=1;	
	}
	cout<<"area="<<sqrt(AREA(a,b,c));
}
