#include <iostream>
using namespace std;
int search(int rs[], int n, int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x==rs[i]) return 0;
	}
	return 1;
}

int getSet(int rs[],const int a[],const int n)
{
	int i,j,k;
	j=1;
	k=1;
	rs[0]=a[0];
	for(i=1;i<n;i++)
	{
		if(search(rs,j,a[i])==1)
		{
			rs[j]=a[i];
			j++;
			k++;
		}
	}
	return k;
}
void count(int rs[],const int a[],int m,const int n)
{
	int b[10];
	int i,j;
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==rs[i]) b[i]++;
		}
	}
	for(i=0;i<m;i++)
	cout<<b[i]<<" ";
	cout<<endl;
}
void sort(int rs[],const int a[],int m,const int n)
{
	int b[10];
	int i,j,k;
	k=0;
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==rs[i]) b[i]++;
		}
	}
	int max=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
	{
		if(b[j]>max)
		{
			max=b[j];
			k=j;
		}
	}
	cout<<rs[k]<<":"<<max<<endl;
	b[k]=0;
	max=0;
	k=0;
	}
}
int main()
{
	int rs[8],n,m;
	int a[8]={3,1,2,3,1,5,2,1};
	n=8;
	m=getSet(rs,a,n);
	cout<<m<<endl;
    count(rs,a,m,n);
	sort(rs,a,m,n);
	return 0;
 } 
