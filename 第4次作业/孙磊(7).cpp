//第四次作业 2019.10.11
//(7) 
#include<iostream>
using namespace std;
int main()
{	
	cout<<"第1项:"<<1<<'/'<<2<<endl; //第一项看不出规律，放在前面 
	int a=3,b=2,temp;
	for(int i=2;i<=20;i++)
	{
		cout<<"第"<<i<<"项:"<<a<<'/'<<b<<endl; 
		temp=a;
		a=a+b;//分子为前一项分子+分母 
		b=temp;// 分母为前一项分子 
		
	}
 } 
