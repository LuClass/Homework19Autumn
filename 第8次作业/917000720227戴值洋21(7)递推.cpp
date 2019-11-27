using namespace std;
#include <iostream>
int main()
{
	int x;
	cout<<"请输入一串整数："; //不超过int类型 
	cin>>x;
	if(x==0)
	cout<<x;
	while(x!=0)
	{
		cout<<x%10;
		x=x/10;
	} 
	return 0;
}
