using namespace std;
#include <iostream>
#include <string.h>
#include <math.h>
struct s
{
	double n;
	double m;
	double k;
};
s f(int a,int b,int c)
{
	s jie;
	jie.n=b*b-4*a*c;
	jie.m=-b;
	jie.k=2*a;
	return jie;
} 
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	s jie;
    jie=f(a,b,c);
	if(a==0)
	  cout<<"该方程不为一元二次方程"<<endl;
	else   
	{
		if(jie.n<0)
	  cout<<"此方程无解"<<endl;
	else if(jie.n==0)
	  {
	  	cout<<"此方程仅有一个解"<<endl;
	  	cout<<jie.m/jie.k<<endl;
	  }
	else
	  {
	  	cout<<"此方程有两个不同的解"<<endl;
		cout<<(jie.m+sqrt(jie.n))/jie.k<<endl;
		cout<<(jie.m-sqrt(jie.n))/jie.k<<endl;
	  }
	}
	return 0;
}
