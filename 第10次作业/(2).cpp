using namespace std;
#include <iostream>
#include <stdlib.h>
#include <time.h>
void getRandom(int a[],int n)
{
	srand((unsigned)time(NULL));  
	for(int i=0;i<n;i++)
	{
		a[i]=rand() % (101);
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
int getMax(const int a[],int n)
{
	int i,j,maxValue,maxIndex,temp;
		maxValue = a[0];
		maxIndex = 0;				
		for(j=1;j<n;j++)
		{
			if(maxValue < a[j])
			{
				maxValue = a[j]; 
				maxIndex = j;
			}
		}
return maxIndex;
}
int main()
{
	int a[10],m;
	getRandom(a,10);
	m= getMax(a,10);
	cout<<m<<endl;
	return 0;
 } 
