#include<iostream>
using namespace std;
int fmin(int num1,int num2)
{
	int a,b,temp;
	if(num1<num2)
    {
    	temp=num1;
    	num1=num2;
    	num2=temp;
	}
    a=num1;b=num2;
    while(b!=0)
    {
    	temp=a%b;
    	a=b;
    	b=temp;
    }
    return a;
}
int Fmax(int num1,int num2)
{
	int a;
	a=num1*num2/fmin(num1,num2);
	return a;
}
int main(void)
{
	int num1,num2;
	cout<<"输入两个整数\n";
	cin>>num1;
	cin>>num2;
	cout<<"最大公因数"<<fmin(num1,num2)<<'\n';
	cout<<"最小公倍数"<<Fmax(num1,num2);
	return 0;
} 
