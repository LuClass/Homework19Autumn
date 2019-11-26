// P68作业  (周二之前要上交的第一部分)

//11.(4)

#include<iostream>
using namespace std;
int main (void)
{
	int count=0;
	char ch=0;
	cout<<"请输入字符"<<endl;
	do
	{
		ch=cin.get();
		if (ch>=48&&ch<=57)
		     count++;
	} while (ch!='\n');
	cout<<"输入的数字字符个数为："<<count<<endl;
	return 0;
}

//11.(7)

#include<iostream>
using  namespace std;
int main(void)
{
	cout<<"第1项:"<<' '<<"1/2"<<endl;
	int a1=3,b1=5,c1=0,a2=2,b2=3,c2=0,i;
	cout<<"第2项:"<<' '<<"3/2"<<endl;
	cout<<"第3项:"<<' '<<"5/3"<<endl;
	for (i=4;i<=20;i++)
	{
		c1=a1+b1;
		c2=a2+b2;
		cout<<"第"<<i<<"项:"<<' '<<c1<<"/"<<c2<<endl;
		a1=b1;b1=c1;a2=b2;b2=c2;
	}
	return 0;
}

//11.(8)

#include<iostream>
using namespace std;
int main(void)
{
	int x,a,b,c,sum=0;
	cout<<"请输入一个正整数"<<endl;
	cin>>x;
	cout<<"该数的所有因子如下:"<<endl;
	for (a=1;a<=x;a++)
	{
		if (x%a==0)
		cout<<a<<endl;
	}
	cout<<'\n';
	cout<<"1~100之间的完全数如下:"<<endl;
	for (b=1;b<=100;b++)
	{
		sum=0;
	       for (c=1;c<=b;c++)
      	{
    		if (b%c==0&&b!=c)
    			sum+=c;
      	}
      	if (sum==b)
    			cout<<b<<endl;
	}
	return 0;
}