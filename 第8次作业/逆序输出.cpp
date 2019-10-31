#include<iostream>
using namespace std;
#include<cmath>
int inverted(int a)
{
	int r;
	while(a!=0)
	{
		r=a%10;
		cout<<r;
		a=a/10; 
}
}
int main()
{
	int a;
	while(cin>>a)
	{
		cout<<"inverted:";
		inverted(a);
		cout<<endl;
	}
	return 0; 
}
