11.4
#include<iostream>
using namespace std;
int main()
{
	char a;
	int sum=0;
	while(a!='\n')
	{
		a=cin.get();
		if(a>='0'&&a<='9')
			sum++;
	}
	cout<<sum;
	return 0;
}

11.7
#include<iostream>
using namespace std;
int main()
{
	int x[30];//分子 
	int y[30];//分母 
	x[0]=1;
	y[0]=2;
	y[1]=2;
	for(int i=1;i<21;i++)
	{
		x[i]=x[i-1]+y[i-1];
		y[i+1]=x[i];
		cout<<"第"<<i<<"项:  "<<x[i-1]<<"/"<<y[i-1]<<endl; 
	}
}

11.8
#include<iostream>
using namespace std;
int main()
{
	cout<<"1~100之间的完全数 : "; 
	for(int a=1;a<101;a++)
	{
		int sum=0;
		for(int i=1;i<a-1;i++)
		{
			if(a%i==0)	sum+=i;
		}
		if(sum==a)
	    cout<<a<<" ";
	}
}
