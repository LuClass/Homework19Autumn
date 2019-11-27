using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
void getRandom(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	  a[i]=rand()%100;
}
int getMax(int a[],int n)
{
	int max=a[0];
	int k=0;
	for(int i=1;i<n;i++)
	  if(a[i]>max)
	  {
	    max=a[i];
	    k=i;
      }
	cout<<max<<'\t'<<k;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	getRandom(a,n);
	for(int i=0;i<n;i++)
	  cout<<a[i]<<'\t';
	cout<<endl;
	getMax(a,n);
	return 0;
}
