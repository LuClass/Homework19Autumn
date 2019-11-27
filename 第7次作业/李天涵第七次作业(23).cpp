using namespace std;
#include <iostream>
int main()
{
	int a,b,i,j;
	cout<<"请输入长度与高度";
	cin>>a>>b;
	for(i=1;i<=b;i++)
	{
		for(j=1;j<i;j++)
		cout<<" ";
		for(j=1;j<=a;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
    for(i=1;i<=b;i++)
    {
    	for(j=1;j+i<=b;j++)
    	cout<<" ";
    	for(j=1;j<=a;j++)
		cout<<"*";
		cout<<endl;
    }
	return 0;
}
