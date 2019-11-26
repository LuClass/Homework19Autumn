//查找水仙花数

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m,p;
	cout<<"请输入查找水仙花数的闭区间端点值"<<endl;
	cin>>n>>m;
	if (n>m)
	cout<<"检查输入的端点值是否正确"<<endl;
	else
	{
		cout<<"该闭区间内的水仙花数如下："<<endl;
		for (p=n;p<=m;p++)
		{
			i=p%10;     //个位 
			j=p/10%10;   //十位 
			k=p/100;     //百位 
			if (p==(i*i*i+j*j*j+k*k*k))
			cout<<p<<endl;
		}
	} 
	
	return 0;
}


//判断回文数

#include<iostream>
using namespace std;

bool isHui(unsigned long long num)
{
	if (num<0||(num>0&&num%10==0))
	return false;
	unsigned long long back=0;
	while (num>back)
	{
		back=back*10+num%10;
		num=num/10;
	}
	return ((num==back)||(num==back/10));
}

int main(void)
{
	unsigned long long num=0; 
	cout<<"请输入一个正整数"<<endl;
	cin>>num;	
	if (isHui(num))
	cout<<"这是回文数"<<endl;
	else 
	cout<<"这不是回文数"<<endl;
	return 0;
} 


//判断完全数

#include<iostream>
using namespace std;

bool isWan(unsigned long num)
{
	unsigned long sum=0;
	for (unsigned long a=1;a<num;a++)
	{
		if (num%a==0)
		{
			sum=sum+a;
		}
	}
	if (sum==num)
	return true;
	else
	return false;
} 

int main ()
{
	unsigned long num;
	cout<<"完全数的判断"<<endl;
	cout<<"请输入一个正整数"<<endl;
	cin>>num;
	if (isWan(num))
	cout<<"是完全数"<<endl;
	else 
	cout<<"不是完全数"<<endl;
	return 0;
} 
