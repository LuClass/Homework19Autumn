#include <iostream>
using namespace std;
int main ()
{
	int a=1,i,sum=0,x;
	cout<<"请输入一个正整数x=";
	cin>>x;
	for (i=1;i<=x;i++)
		{
			if(x%i==0)
			cout<<i<<'\t';
		}
	cout<<endl;
	while(a<=100)
		{for(i=1;i<=a;i++)
			{
				if(a%i==0)
				{	
					sum=sum+i;
				}
			}
		if(a==sum-a)
		cout<<sum-a<<"为完全数"<<endl;
		sum=0;
		a++;
		}
		
	return 0;
}
