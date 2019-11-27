using namespace std;
#include <iostream>
int main()
{
	int i,j;
	int b,c,d,n;
	cout<<"ÇëÊäÈëi,jÇÒ£¨i<j£©"<<endl;
	cin>>i>>j;
	for(int a=i;a<j;a++)
	{
		b=a%10;
		c=a/10%10;
		d=a/100;
		n=b*b*b+c*c*c+d*d*d;
		if(n==a)
		  cout<<a<<'\t';
	}
	return 0;
}
