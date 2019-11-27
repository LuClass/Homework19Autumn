using namespace std;
#include <iostream>
long int max(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void toHex(int x)
{
	cout<<hex<<x;
}
int main()
{
	int c,d;
	cin>>c>>d;
	toHex(max(c,d));
	return 0;
}
