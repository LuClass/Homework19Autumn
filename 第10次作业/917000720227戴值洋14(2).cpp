#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void getRandom(int a[],int n)
{
	srand(time(0));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
}

int getMax(const int a[],int n)
{
	int num=0,array=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>num)
		{
			num=a[i];
			array=i;
		}
	}
	return array;
}

int main()
{
	int a[10];
	getRandom(a,10);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<getMax(a,10);
	return 0;
} 
