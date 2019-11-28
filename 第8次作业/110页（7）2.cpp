using namespace std;
#include <iostream>
int main()
{
	int k,m,l=0;
	cin>>k;
	while(k/10!=0)
	{
		m=k%10;
	    k=k/10;
	    l=l*10+m;
	 }
	 if(k!=0)
	 l=l*10+k;
	 cout<<l;
	 return 0;
}