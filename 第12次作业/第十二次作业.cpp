#include <iostream>
using namespace std;
int getSet(int rs[],const int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<count;j++)
		if(rs[j]==a[i])
		break;
		if(j>=count)
		{
			rs[count]=a[i];
			count++;
		}
	}
	return count;
}

#include <iostream>
using namespace std;
int getSet(int rs[],int b[],const int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<count;j++)
		if(rs[j]==a[i])
		{
			b[j]++;
			break;
		}
		if(j>=count)
		{
			rs[count]=a[i];
			b[count]=1;
			count++;
		}
	}
	return count;
}

#include <iostream>
using namespace std;
int getSet(int rs[],int b[],int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<count;j++)
		if(rs[j]==a[i])
		{
			b[j]++;
			break;
		}
		if(j>=count)
		{
			rs[count]=a[i];
			b[count]=1;
			count++;
		}
	}
	return count;
}
void bubblesort(int rs[],int b[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	 for(j=0;j<n-1-i;j++)
	  if(b[j]<b[j+1])
	  {
	  	temp=b[j];
	  	b[j]=b[j+1];
	  	b[j+1]=temp;
	  	temp=rs[j];
	  	rs[j]=rs[j+1];
	  	rs[j+1]=temp;
	  }
}
int main ()
{
	getSet(int rs[],int b[],int a[],int n);
	bubblesort(int rs[],int b[],int n);
	for(int i=0;i<n;i++)
	cout<<rs[i]<<":"<<b[i]<<endl;
}
