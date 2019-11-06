using namespace std;
#include <iostream>
#include <stdlib.h>
#include <time.h> 
void getRandom(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
}
int getMax(const int a[],int n)
{
	int maxnumber,maxindex;
	maxnumber=a[0];
	maxindex=0;
	for(int i=0;i<n;i++)
	{
		if(maxnumber<a[i])
		{
			maxnumber=a[i];
			maxindex=i;
		}
	}
	return maxindex;
}
int main()
{
	int a[50];
	getRandom(a,50);
	cout<<getMax(a,50);
	return 0;
}
