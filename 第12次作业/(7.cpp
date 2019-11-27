#include<iostream>
using namespace std; 
int getSet(int rs[],const int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=0;j<count;j++)
		{
			if(rs[j]==a[i])
			flag=1;			
		}
		if(flag==0)
		rs[count++]=a[i];
	}
	return count;
}
int get2(int rs[],int v[],const int a[],int n)
{
	int count;
	count=getSet(rs,a,n);
	for(int i=0;i<count;i++)
	{
		int t=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==rs[i])
			t++;
		}
		v[i]=t;
	}
	return count;
}
int get3(int rs[],int v[],const int a[],int n)
{
	int count;
	count=get2(rs,v,a,n);
	for(int i=0;i<count-1;i++)
	{
		for(int j=i;j<count;j++)
		{
			if(v[j]>v[i])
			{
				int temp1;   int temp2;
				temp1=v[i];  temp2=rs[i];
				v[i]=v[j];   rs[i]=rs[j];
				v[j]=temp1;  rs[j]=temp2;
			}
		}
	}
	for(int k=0;k<count;k++)
	{
		cout<<rs[k]<<':'<<v[k]<<endl;
	}
	return count;
}
int main()
{
	int a[8]={3,1,2,3,1,5,2,1};
	int rs[8],v[8],n=8;
	get3(rs,v,a,n);
}












 
