#include<iostream>
using namespace std;
#include<cmath>
int inverted(int a)
{

	if(a==0)
	    return 0;
	else
	    {
	    	cout<<a%10;
	    	inverted(a/10);
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
