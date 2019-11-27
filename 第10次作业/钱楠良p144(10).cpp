using namespace std;
#include <iostream>
int main()
{
	int a[22];
	int cs=0,n=21;
	for(int i=1;i<=21;i++)
	{
		a[i]=i;
	}
	while(1)
	{
		for(int j=1;j<=21;j++)
		{
			if(a[j]!=0)
	 	{
			cs++;
			if(cs%5==0)
			{
			a[j]=0;
			n--;
			if(n==1)
			break;
			}
	 	}
		}
		if(n==1)
		break;
	}
	for(int k=1;k<=21;k++)
	{
		if(a[k]!=0)
		{
		cout<<"最后一个人的序号是"<<k<<endl;
		break;
		}
	}
	return 0;
	
}