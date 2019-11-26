//main
#include<iostream>
using namespace std;
int max(int,int);
int toHex(int);
int main(void)
{
	int a,b;
	cout<<"please input a b:";
	cin>>a>>b;
	cout<<"max{"<<a<<","<<b<<"}="<<max(a,b)<<endl;
	cout<<"hex("<<max(a,b)<<")=";
	toHex(max(a,b));
	return 0;
}
