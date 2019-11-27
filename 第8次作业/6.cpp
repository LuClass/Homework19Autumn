#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while((cin>>a>>b)!=NULL)
	{
		if(a<b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		int gcd=0;  
		int lcm=a*b; 		
		int t=0;
		while(b!=0)
		{
			t=a%b;
			a=b;
			b=t;
		}
		gcd=a;
		lcm=lcm/gcd;
		printf("%d %d\n",gcd,lcm);
	}
	return 0;
}
