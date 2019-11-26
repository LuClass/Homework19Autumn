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
	for(int x=3;x<=497;x++)
	{
		if(ss(x)&&ss(x+2))
		cout<<x<<" "<<x+2<<endl;
	}
	return 0;
}