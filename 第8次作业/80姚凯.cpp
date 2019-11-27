6.
#include <iostream>
using namespace std;
int main ()
{
	int zdgys(int a,int b);
	int zdgbs(int a,int b);
	int a,b;
	cin>>a>>b;
	cout<<"最大公约数:"<<zdgys(a,b)<<endl;
	cout<<"最大公倍数:"<<zdgbs(a,b)<<endl;
	return 0;
}
int zdgys(int a,int b)
{
	int m,n,t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t; 
    }
	m=a;
	n=b;
	while(n!=0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return m;
}
int zdgbs(int a,int b)
{
	return a*b/zdgys(a,b);
}

7.(1)
#include <iostream>
using namespace std;
int main ()
{
	int x,m;
	cin>>x;
	if(x/10==0)
	cout<<x;
	else
	for(;x>0;x/=10)
	{
		m=x%10;
		cout<<m;
	}
	return 0;
}
(2)
#include <iostream>
using namespace std;
int main ()
{
	int fs(int n);
	int x,n;
	cin>>x;
	cout<<fs(n)<<endl;
	return 0;
}
int fs(int n)
{	
    int x,t,m,i,z;
	for(i=1;x/10!=0;i++)
	{
	x=x/10;
	}
	n=i; 
	if(x/10!=0)
	{
	 m=x%10;
    }
	for(z=1;n>1;n--)
	{
		z=z*10;
	}
	if(n==1)
	return x;
	else
	return m*z+fs(n-1);
}
