#include<iostream>
using namespace std; 
int main()
{
	long int i;
	int b1,b2,b4,b6,b10,b;
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b4=b2+200000*0.05;
	b6=b4+200000*0.03;
	b10=b6+400000*0.015;
	cin>>i;
	if(i<=100000)
	b=i+i*0.1;
	else if(i<=200000)
	b=b1+(i-100000)*0.075+i;
	else if(i<=400000)
	b=b2+(i-200000)*0.05+i;
	else if(i<=600000)
	b=b4+(i-400000)*0.03+i;
	else if(i<=1000000)
	b=b6+(i-600000)*0.015+i;
	else
	b=b10+(i-1000000)*0.01+i;
	cout<<b<<endl;
	return 0;
}
