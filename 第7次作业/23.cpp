using namespace std;
#include <iostream>
int main()
{
	int x,y,a,b,c;
	cin>>x;
	cin>>y;
	for(a=1;a<=y;a++)
	{
		for(b=1;b<=x;b++)
		cout<<'*';
		cout<<'\n';
		for(c=0;c<a;c++)
		cout<<' ';
	}
	return 0;
}

