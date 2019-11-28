#include <iostream>
#include <stdlib.h>
using namespace std;
void getRandom(int a[], int n)
{
	  srand(a[0]);
    for(int i=0;i<n;i++)
	    a[i] = rand()%100;
}

int getMax(const int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
	if(max<a[i])
	max=a[i];
	return max;
}

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<' ';
}

int main()
{
	int a[10];
	getRandom(a,10);
	print(a,10);
	cout<<endl;
	cout<<getMax(a,10);
}
