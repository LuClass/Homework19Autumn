#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cin>>i>>j;
	for(int k=i;k<=j;k++)
	{
		int m=k,s=0;
		while(m!=0)
		{
			s+=(m%10)*(m%10)*(m%10);
			m=m/10;
		}
		if(s==k)
		cout<<k<<'\t';
		
	}
	cout<<endl;
}
