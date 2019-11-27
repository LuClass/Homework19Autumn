#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"请输入任意一个整数："; 
	cin>>x;
	int m=x,s=0;
	while(m!=0)
	{
		s=s*10+(m%10);
		m=m/10;
	}
	if(s==x)
	cout<<x<<"是回文数"<<endl;
}
