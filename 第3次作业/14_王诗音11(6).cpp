#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,d,s1,s2;
	cout<<"输入一元二次方程的系数a b c:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0)
		cout<<"方程无根"<<endl;
	else if(d==0)
	{
		s1=-b/(2*a);
		cout<<"方程有一个根："<<s1<<endl;
	 } 
	else
	{
		s1=(-b-sqrt(d))/(2*a);
		s2=(-b+sqrt(d))/(2*a);
		cout<<"方程有两个根："<<s1<<' '<<s2<<endl; 
	}
	return 0;
}
