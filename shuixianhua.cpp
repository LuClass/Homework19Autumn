using namespace std;
#include <iostream>
int main()
{
	int x,g,s,b;
	for(int i=100;i<=999;i++)
	{
		x=i;
		g=x%10;
		s=(x/10)%10;
		b=(x/100)%10;
		if(x==g*g*g+b*b*b+s*s*s)
		cout<<x<<endl;
		
	}
	return 0;
}
