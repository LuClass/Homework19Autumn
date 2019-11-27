using namespace std;
#include <iostream>
int f(int b)
{
	if(b!=0)
	cout<<b%10;
	else
	return 0;
	return f(b/10);
}
int main()
{
	int a;
	cin>>a;
	
	
	
	cout<<"递归的结果为";
	f(a);
	
	
	cout<<endl;
	
	
	
	cout<<"递推的结果为";
	for(;a!=0;a/=10)
	{
		cout<<a%10;
	}
	
	
	
	return 0;
}
