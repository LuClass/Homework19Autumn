#include<iostream>
using namespace std;
int main()
{
	int i,j,a,b,c;
	cout<<"input i j(i<j):";
	cin>>i>>j;
	cout<<"'water flower'numbers between i and j are:"<<endl;
	if(i<100) i=100;
	if(j>999) j=999;
	for(int n=i;n<=j;n++)
	{
		a=n/100;
		b=n/10%10;
		c=n%10;
		if(a*a*a+b*b*b+c*c*c==n)
			cout<<n<<'\t';
	}
	return 0;
 } 
