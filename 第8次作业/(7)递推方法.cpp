using namespace std;
#include <iostream>
int main()
{
	int num,a;
	cin>>num; 
	for(;num/10!=0;)
	{
       a=num%10;
       cout<<a;
       num=num/10;      
	}
	cout<<num;
	return 0;
}
