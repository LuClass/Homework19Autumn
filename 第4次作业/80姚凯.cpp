68.(4)
#include <iostream>
using namespace std;
int main (void)
{
	int count=0;
	char ch=0;
	do{
		ch=cin.get( );
		if(ch>='0'&&ch<='9')
		count++;
	}while (ch!='\n');
	cout<<"count="<<count<<endl;
	return 0;
}

(7)
#include <iostream>
using namespace std;
int main (void)
{
	int count=2,a=3,b=2;
	cout<<"1/2"<<endl;
	cout<<"3/2"<<endl;
	for(;count<=20;count++)
	{
		a=a+b;
		b=a-b;
		cout<<a<<'/'<<b<<endl;
    }
	return 0;
}

(8)
#include <iostream>
using namespace std;
int main (void)
{
	int x;
	cin>>x;
	if(x>0)
	for (int i=1;i<=x;i++)
	{if(x%i==0)
	cout<<i<<" ";
    }
    cout<<endl;
	for (int a=2;a<=100;a++)
	 {int sum=0;
	   for (int m=1;m<a;m++)
	   if(a%m==0)
	   sum+=m;
	   if(sum==a)
	   cout<<a<<endl;
	 }
	 	return 0;
}
