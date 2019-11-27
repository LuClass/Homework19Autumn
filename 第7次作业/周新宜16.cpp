using namespace std;
#include <iostream>
int main()
{
	int a,b,n1,n2,t;
	cout<<"Please input two numbers"<<endl;
	cin>>n1>>n2;
	if(n1<n2)
	{
		t=n1;
		n1=n2;
		n2=t;
	}
	a=n1,b=n2;
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	cout<<"最大公约数:"<<a<<endl;
	cout<<"最大公倍数:"<<n1*n2/a<<endl;
	return 0;
}
