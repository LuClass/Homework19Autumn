#include<iostream>
#include<stdlib.h>
#include<time.h> 
using namespace std;
void getRandom(int a[],int n)
{
	srand(time(0));
	for(int i=0;i<n;i++)
	a[i]=rand()%100;
}
int getMax(int a[],int n){
int i,j,maxValue,maxIndex,temp;
    maxValue=a[0];		
	maxIndex=0;	
	for(i=1;i<n;i++){	
		if(maxValue<a[i]){
			maxValue=a[i]; 
			maxIndex=i;
			}
		}
		if(i!=maxIndex){	
			temp=a[i]; 		
			a[i]=a[maxIndex]; 
			a[maxIndex]=temp;
		}
	return maxIndex;
	}
	int main(){
int n;
cin>>n;
int a[n];
getRandom(a,n);
	for(int i=0;i<n;i++)
	  cout<<a[i]<<'\t';
     cout<<endl;
cout<<"最大数下标为: "<<getMax(a,n)<<endl;
return 0;
}


