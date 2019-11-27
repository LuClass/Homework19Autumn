#include<iostream>
using namespace std;

int getSet(int rs[],const int a[],int n)
{
	int key=1,k=1;
	rs[0]=a[0];
	for (int i=1;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (a[i]==a[j])
			{
				key=0;
				break;
			}
		}
		if (key==1)
		{
			rs[k]=a[i];
			k++;
		}
		else 
		{
			key=1;
			continue;
		}
	}
	cout<<"其中互不相等的元素："<<endl;
	for (int m=0;m<k;m++)
	{
		cout<<rs[m]<<" ";
	}
	cout<<endl;
	cout<<"元素个数：";
	return k;
}


int getSetp(int rs[],const int a[],int n)
{
	int key=1,k=1;
	rs[0]=a[0];
	for (int i=1;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (a[i]==a[j])
			{
				key=0;
				break;
			}
		}
		if (key==1)
		{
			rs[k]=a[i];
			k++;
		}
		else 
		{
			key=1;
			continue;
		}
	}
	cout<<"其中互不相等的元素以及各自的出现次数："<<endl;
	for (int m=0;m<k;m++)
	{
		cout<<rs[m]<<" ";
	}
	cout<<endl;
	int time=0;
	for (int l=0;l<k;l++)
	{
		for (int ll=0;ll<n;ll++)
		{
			if (rs[l]==a[ll])
			{
				time++;
			}
		}
		cout<<time<<" ";
		time=0;
	}
	return 0;
}

int getSetpp(int rs[],const int a[],int n)
{
	int key=1,k=1;
	rs[0]=a[0];
	for (int i=1;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (a[i]==a[j])
			{
				key=0;
				break;
			}
		}
		if (key==1)
		{
			rs[k]=a[i];
			k++;
		}
		else 
		{
			key=1;
			continue;
		}
	}
	cout<<"其中互不相等的元素以及各自出现的次数："<<endl;
	for (int m=0;m<k;m++)
	{
		cout<<rs[m]<<" ";
	}
	cout<<endl;
	int ti=0,time[k];
	for (int l=0;l<k;l++)
	{
		for (int ll=0;ll<n;ll++)
		{
			if (rs[l]==a[ll])
			{
				ti++;
			}
		}
		cout<<ti<<" ";
		time[l]=ti;
		ti=0;
	}
	cout<<endl;
	cout<<"按照出现次数降序排序："<<endl;
	int step;
	for (int aa=k-2;aa>=0;aa--)
	{
		for (int bb=0;bb<=aa;bb++)
		{
			if (time[bb]<time[bb+1])
			{
				step=time[bb];
				time[bb]=time[bb+1];
				time[bb+1]=step;
				step=rs[bb];
				rs[bb]=rs[bb+1];
				rs[bb+1]=step;
			}
		}
	}
	for (int w=0;w<k;w++)
	{
		cout<<rs[w]<<":"<<time[w]<<endl;
	}
	return 0;
}
int main(void)
{
	int n;
	cout<<"please set size:";
	cin>>n;
	int rs[n],a[n];
	for (int m=0;m<n;m++)
		cin>>a[m];
	//(1)
	//cout<<getSet(rs,a,n);
	//(2)
	//cout<<getSetp(rs,a,n);
	//(3)
	//getSetpp(rs,a,n);
	return 0;
}