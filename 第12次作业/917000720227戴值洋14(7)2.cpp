#include <iostream>
using namespace std;

int getSet(int rs[],const int a[],int n,int m[])
{
	rs[0]=a[0];
	int num=1;
	m[0]=0;
	for(int k=1;k<8;k++)
	{
		m[k]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(a[i]==rs[j])
			{
				m[j]++;
				break;
			}
			if(j==num-1)
			{
				rs[j+1]=a[i];
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
	int rs[8],m[8];
	cout<<getSet(rs,a,8,m)<<endl;
	for(int i=0;i<getSet(rs,a,8,m);i++)
	{
		cout<<rs[i]<<"出现次数为"<<m[i]<<endl;
	}
	return 0;
}
