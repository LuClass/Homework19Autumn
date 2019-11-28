//function
#include<iostream>
#include<math.h>
using namespace std;
double s(int a,int b,int c)
{
	return (a+b+c)/2.0;
}
double area(int a,int b,int c)
{
	return sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c));
}
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
	cout<<"area="<<area(a,b,c);
}
