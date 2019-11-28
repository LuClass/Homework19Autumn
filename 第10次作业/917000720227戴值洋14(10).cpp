#include <iostream>
using namespace std;
#define PERSON 21
int main()
{
	int a[PERSON],sum=0,num=1;
	int flag[PERSON];
	for(int j=0;j<PERSON;j++)
	{
		flag[j]=1;
	}
	while(sum!=PERSON-1)
	{
		for(int i=0;i<PERSON;i++)
		{
			if(flag[i])
			{
				a[i]=num;
				num++;
			}
			if(flag[i]!=0&& a[i]%5==0)
			{
				flag[i]=0;
				a[i]=0;
				sum++;
			}
		} 
	}
	for(int k=0;k<PERSON;k++)
	{
		if(a[k]!=0)
		{
			cout<<"最后剩下的人的编号为"<<k+1;
		}
	}
	return 0;
}
