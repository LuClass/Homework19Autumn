#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void getRandom(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n-1;i++)
	{
		a[i]=rand()%100;
	}
}
int getMax(const int a[],int n)
{
	int max=a[0],t;
	for(int i=1;i<n-1;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			t=i;
		}
		
	}
	cout<<"max="<<max<<'\t';
	return t;
}
int main()
{
	int a[100];
	int n=100;
	int t;
	getRandom(a,n);
	t=getMax(a,n);
	cout<<t<<endl;
	
}
