#include<iostream>
using namespace std;
int gcd(int a,int b)
{
     int r=0;
     	r=a%b;
	while(r!=0){
		a=b,b=r;
		r=a%b;
	}
	cout<<"最大公约数:"<<b<<endl;
}
int lcm(int a,int b)
{
	if(a>b&&a%b==0)
	   cout<<a<<endl;
	   else {
	   if(b>a&&b%a==0)
	     cout<<"最小公倍数："<<b<<endl;
	     else
	     cout<<"最小公倍数："<<a*b<<endl;
	 }
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		lcm(a,b);
	    gcd(a,b );	
	}
	return 0;
}
