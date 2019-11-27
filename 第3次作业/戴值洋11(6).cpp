#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	cout<<"请输入a b c:";
	double a,b,c;
	cin>>a>>b>>c;
	if(b*b-4*a*c<0)
	{
		cout<<"方程无实数根"<<endl; 
	}
	else if(b*b-4*a*c==0)
	{
		cout<<"方程有两个相等的实数根："<<-b/(2*a)<<endl; 
	}
	else
	{
		cout<<"方程有两个不相等的实数根："<<(-b+sqrt(b*b-4*a*c))/(2*a)<<" "<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
	}
	return 0;
}
