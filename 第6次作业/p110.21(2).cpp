using namespace std;
#include <iostream>
int C(int n,int k)
{
	int a=1,b=1,c=1,d;
	for(int x=1;x<=n;x++)
	a*=x;
	for(int x=1;x<=k;x++)
	b*=x;
	for(int x=1;x<=(n-k);x++)
	c*=x;
	d=a/b/c;
	return d;
}

int main()
{
	cout<<"C(4,2)="<<C(4,2)<<'\n';
	cout<<"C(6,4)="<<C(6,4)<<'\n';
	cout<<"C(8,7)="<<C(8,7)<<'\n';
	return 0;
}
