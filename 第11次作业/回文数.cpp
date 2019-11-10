using namespace std;
#include <iostream>
int main()
{
	int i,j,a,n,x,y=0;
	cin>>n;
	x=n;
	for (i=1;i<=n;i=i*10)
{
	a=i;
}
    for (j=1;j<=i/10;j=j*10)
{
	y+=(n%10)*a;
	n=n/10;
	a=a/10;
}

    if (x==y)
    cout<<x<<"是回文数列";
    else
    cout<<x<<"不是回文数列";
    return 0;
} 
