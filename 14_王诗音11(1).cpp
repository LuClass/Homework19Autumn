#include<iostream>
using namespace std;
int main()
{
	int n,s=0,i=1;
	cout<<"输入一个整数：";
	cin>>n;
	while(n)
	{
		s+=(n%2)*i;
		i*=10;
		n/=2;
	}
	cout<<"其二进制形式："<<s<<endl;
	return 0; 
}
