#include <iostream>
using namespace std;

void toHex(int m)
{
	cout<<hex<<m<<endl;
}

int max(int a,int b)
{
	int c;
	c=a>b?a:b;
	return c;
}

int main(void)
{
	int i,j,k;
	cout<<"请输入两个正整数"<<endl;
	cin>>i>>j;
	k=max(i,j);
	cout<<"两个数的最大值为"<<endl;
	cout<<k<<endl;
	cout<<"十六进制输出为"<<endl; 
	toHex(k);
	return 0;
} 
