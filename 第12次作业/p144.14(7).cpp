#include<iostream>
#include<string.h>
using namespace std;
int getSet(int rs[],int cishu[],const int a[],int n)
{
	int sum=0,j=0;
	for(int i=0;i<n;i++)
	if(a[i]==0)
	{
		sum++;
		rs[0]=0;
		cishu[0]=1;
		break;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		continue;
		for(j=0;j<sum;j++)
		{
			if(a[i]==rs[j])
			goto next;
		}
		rs[sum]=a[i];
		cishu[sum]=1;
		sum++;
		continue;
		next:cishu[j]++;
	}
	return sum;
}
void paixu(int rs[],int cishu[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(cishu[j]<cishu[j+1])
			{
				temp=cishu[j];
				cishu[j]=cishu[j+1];
				cishu[j+1]=temp; 
				temp=rs[j];
				rs[j]=rs[j+1];
				rs[j+1]=temp;
			}
}
int main()
{
	int rs[50];
	int cishu[50];
	int a[50]={3,1,2,3,1,5,2,1,0};	
	int sum=getSet(rs,cishu,a,50);
	cout<<sum<<endl;
	paixu(rs,cishu,sum);
	for(int i=0;i<sum;i++)
	{
		cout<<rs[i]<<':'<<cishu[i]<<endl;
	}
	return 0;
}
