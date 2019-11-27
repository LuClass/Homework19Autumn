using namespace std;
#include<iostream>
int main(void)
{
	int a=1,b=2,c=3;
	int i,d;
	cout<<"1/2"<<" "<<"分子为1"<<" "<<"分母为2"<<endl;
	for(i=2;i<=20;i++)
	{
		cout<<c<<"/"<<b<<" "<<"分子为"<<c<<" "<<"分母为"<<b<<endl;
		d=c;
		c=b+c;
		b=d; 
	 } 
	return 0;
 } 
