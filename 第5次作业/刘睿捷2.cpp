#include<iostream>
using namespace std;
int main(void)
{
	int a,x;
	cout<<"please intput the profit:"<<endl;
	cin>>x;
	switch (x/100000)
	{
		case 0:a=x*0.1;
			break;
		case 1:a=(x-100000)*0.075+10000;
			break;
		case 3:		
		case 2:a=(x-200000)*0.05+7500+10000;
			break;
		case 5:	
		case 4:a=(x-400000)*0.03+10000+7500+10000;
			break;
		case 7:
		case 8:
		case 9:	
		case 6:a=(x-600000)*0.015+6000+10000+7500+10000;
			break;
		case 10:a=(x-1000000)*0.01+6000+6000+10000+7500+10000;
			break;
		default:a=(x-1000000)*0.01+6000+6000+10000+7500+10000;		
	}
	cout<<"bonus="<<a;
	return 0;
}
