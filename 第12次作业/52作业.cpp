1. 
#include<iostream>
using namespace std;
int getSet(int rs[],const int a[],int n)
{
	rs[0]=a[0];
	int num=1;
	int i,j;
	for(i=0;i<n;i++)
	{for(j=0;j<num;j++)
		{if(a[i]==rs[j])
			{break;
			}
			if(j==num-1)
			{rs[j+1]=a[i];
			 num++;
			 break;
			}
		}
	} 
	return num;
	}
int main()
{
	int a[8]={3,1,2,3,1,5,2,1};
	int rs[8];
	for(int i=0;i<getSet(rs,a,8);i++)
	{
		cout<<rs[i]<<" ";
	}
	cout<<getSet(rs,a,8)<<endl;
	return 0;
}



2. 
#include <iostream>
using namespace std;
int f(int rs[],const int a[],int n,int m[])
{
	rs[0]=a[0];
	int num=1;
	int k;
    m[0]=0;
	for(k=1;k<8;k++)
	{m[k]=1;
}
	for(int i=0;i<n;i++)
	{for(int j=0;j<num;j++)
		{if(a[i]==rs[j])
			{m[j]++;
				break;}
			if(j==num-1)
			{rs[j+1]=a[i];
				num++;
				break;}
		}
	} 
	return num;}
int main()
{
	int a[8]={3,1,2,3,1,5,2,1};
	int rs[8];
	int m[8];
	cout<<f(rs,a,8,m)<<endl;
	for(int i=0;i<f(rs,a,8,m);i++)
	{cout<<rs[i]<<endl;
    cout<<m[i]<<endl;
	}
	return 0;
}

