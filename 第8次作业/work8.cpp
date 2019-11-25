21-（6）
#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,z,t;
	cin>>a>>b;
	x=a;
	y=b;
	t=a%b;
	while(t!=0)
	{
		a=b;
		b=t;
		t=a%b;
	}
	z=x*y/b;
	cout<<"最小公倍数："<<z<<endl;
	cout<<"最大公约数："<<b<<endl;
    
}

21-（7）
//递归 
#include <iostream>
using namespace std;
void f(int n)
{
	if(n/10)
	{
		cout<<n%10;
		f(n/10);
	}
	else cout<<n;
} 
int main()
{
	int a;
	cin>>a;
	f(a);
}

//递推 
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a/10) 
	{
		cout<<a%10;
		a=a/10;
	}
	cout<<a;
}


