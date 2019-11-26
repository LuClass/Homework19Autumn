#include<iostream>
#include<math.h>
using namespace std;
struct ans{
	int count;
	double x1,x2;
};

ans f(int a,int b,int c)
{
	ans s;
	int t=b*b-4*a*c;
	if(t<0) s.count=0;
	if(t==0)
	{
		s.count=1;
		s.x1=s.x2=-b/(2.0*a);
	}
	if(t>0)
	{
		s.count=2;
		s.x1=(-b+sqrt(t))/(2.0*a);
		s.x2=(-b-sqrt(t))/(2.0*a);
	}
	return s;
}

int main()
{
	cout<<"input a b c:"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"拥有实根数目："<<f(a,b,c).count<<endl;
	if(f(a,b,c).count==1) 
		cout<<"x1=x2="<<f(a,b,c).x1<<endl;
	if(f(a,b,c).count==2)
		cout<<"x1="<<f(a,b,c).x1<<"  x2="<<f(a,b,c).x2<<endl;
	return 0;
}
