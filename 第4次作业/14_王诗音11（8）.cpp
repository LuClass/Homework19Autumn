#include<iostream>
using namespace std;
int main(){
	cout<<"输入一个正整数显示其因子:"<<endl; 
	int x,a,i,count=1;
	cin>>x;
	if(x==1)
		cout<<x;
	else
	{
		cout<<1<<'\t'<<x<<'\t';
		for(i=2;i*i<x;i++)
		{
			if(x%i==0)
			{
				a=x/i;
				cout<<i<<'\t'<<a<<'\t';
				count++;
				if(count%3==0)
					cout<<endl;
			}
		}
		if(i*i==x)
			cout<<i;
	}
	cout<<endl;
	
	
	cout<<"1~100之间的完全数："<<endl;
	int sum;
	for(x=6;x<=100;x++) 
	{
		sum=1;
		for(i=2;i*i<x;i++)
		{
			if(x%i==0)
			{
				a=x/i;
				sum+=a+i;
			 } 
		}
		if(i*i==x)
			sum+=i;
		if(sum==x)
		{
			cout<<x<<'\t';
		}
	}
	return 0;
}
