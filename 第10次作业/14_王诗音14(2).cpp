#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
void getRandom(int a[],int n)
{
	srand(time(0));
	for(int i=0;i<n;i++)
		a[i]=rand()%100;
 } 
 
 int getMax(const int a[],int n)
 {
 	int maxValue=a[0],maxIndex=0;
 	for(int i=1;i<n;i++)
 	{
 		if(maxValue<a[i])
 		{
 			maxValue=a[i];
 			maxIndex=i;
		 }
	 }
	 return maxIndex;
 }
 
 int main()
 {
 	int a[10];
 	getRandom(a,10);
 	for(int i=0;i<10;i++)
 		cout<<a[i]<<'\t';
 	cout<<"Max=a["<<getMax(a,10)<<"]="<<a[getMax(a,10)]<<endl;
 	return 0;
 }
