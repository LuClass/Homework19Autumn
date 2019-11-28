using namespace std;
#include <iostream>
bool ss(int x)
{
	for(int b,a=2;a<x;a++)
	{
		b=x%a;
		if(b==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{   
    int x;
    int y=x;
    cin>>x;
	if(ss(x))
	cout<<x<<"="<<x<<endl;
	else
	{
		cout<<x<<"=";
	   for(int i=2;i<=y;i++)
	   {
	   	if(ss(i)==1&&x%i==0)
	   	{
	   		cout<<i;
	   		x=x/i;
	   	    i=1;
	   		if(x>=2)
	   		cout<<"*";
	   	}
   	}	
	}
}