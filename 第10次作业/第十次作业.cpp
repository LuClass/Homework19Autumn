(2).
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void getRandom(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	a[i]=rand()%100;
}
int getMax(const int a[],int n)
{
	int i=0,k=0,max;
	for(;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
		max=a[i];
		k=i;
	    }
	}
	return k;
}

(5).
#include <iostream>
using namespace std;
int SUM(int n)
{
    int sum=0;
	for(;n>0;n/=10)
	{
		sum+=n%10;
	}
	return sum;
}
bool isSmith(int n)
{
	int sum=0,i;
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			sum+=SUM(i);
			n/=i;
		}
	}
	if(sum==SUM(n))
	return true;
	else
	return false;
}
int main ()
{   
    int m;
    for(m=4937774;isSmith(m);m++);
	cout<<m;
	return 0;
}

(10).
#include <iostream>
using namespace std;
int main (void)
{   
	int a[21],n=0,k=0,i;
	for(i=0;i<21;i++){
	a[i]=1;
    }
    for(k=0;k<20;)
    {
    	for(i=0;i<21;i++)
    	if(a[i])
    	{
    		n++;
    		if(n%5==0)
    		{
    			a[i]=0;
				k++;
				cout<<i+1<<endl;
    		}
    	}
    }
    for(i=0;i<21;i++)
    if(a[i])
    cout<<"最后剩下的人编号为"<<i+1<<endl;
    return 0;
}
