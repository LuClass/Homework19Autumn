using namespace std;
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void getrandom(int a[],int n)
{    
     int z;
	srand(time(NULL));
	for(int i=0;i<=n;i++)
	{
		a[i]=rand()%100;
	}
}
int getmax(const int a[],int n){
	int x=0;
	for(int i=1;i<=n;i++)
	{
		if(a[x]<a[i])
		{
			x=i;
		}
	}
	return x;
}
int main(){
	int a[100],n=100;
	getrandom(a,n);
	cout<<getmax(a,n);
	return 0;
}