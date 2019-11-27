#include<iostream>
using namespace std;
int getSet(int rs[],const int a[],int n)
{
	rs[0]=a[0];
	int k=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(a[i]==rs[j]) break;
			if(j==k-1)
			{
				rs[k]=a[i];
				k++;
				break;
			}
		}
	}
	cout<<"rs={";
	for(int i=0;i<k-1;i++)
		cout<<rs[i]<<",";
	cout<<rs[k-1]<<"}"<<endl;
	return k;
}

int count(int rs[],int num[],const int a[],int n)
{
	rs[0]=a[0];
	num[0]=1;
	int k=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(a[i]==rs[j])
			{
				num[j]++;
				break;
			}
			if(j==k-1)
			{
				rs[k]=a[i];
				num[k]=1;
				k++;
				break;
			}
		}
	}
	cout<<"num={";
	for(int i=0;i<k-1;i++)
		cout<<num[i]<<",";
	cout<<num[k-1]<<"}"<<endl;
	return k;
}

int sort(int rs[],int num[],const int a[],int n)
{
	rs[0]=a[0];
	num[0]=1;
	int k=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(a[i]==rs[j])
			{
				num[j]++;
				break;
			}
			if(j==k-1)
			{
				rs[k]=a[i];
				num[k]=1;
				k++;
				break;
			}
		}
	}
	int t;
	for(int i=0;i<k-1;i++)
		for(int j=0;j<k-1-i;j++)
			if(num[j]<num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+i]=t;
				t=rs[j];
				rs[j]=rs[j+1];
				rs[j+i]=t;
			}
	for(int i=0;i<k;i++)
	{
		cout<<rs[i]<<":"<<num[i]<<endl; 
	}
	return k;
}

int main()
{
	int a[8]={3,1,2,3,1,5,2,1};
	int rs[8];
	int num[8];
	cout<<"a={";
	for(int i=0;i<7;i++)
		cout<<a[i]<<",";
	cout<<a[7]<<"}"<<endl;
	cout<<"getSet"<<endl;
	cout<<getSet(rs,a,8)<<endl;
	cout<<"count"<<endl;
	count(rs,num,a,8);
	cout<<"sort"<<endl;
	sort(rs,num,a,8);
	return 0;
 } 
