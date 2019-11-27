#include<iostream>
#include<algorithm>
using namespace std;

void getRandom(int a[],int n){
	int i;
	for(i=0;i<n;i++)
		a[i]=rand()%101;
}

int getMax(const int a[],int n){
	int i,max,t;
	max=a[0];
	t=0;
	for(i=1;i<n;i++){
		if(a[i]>max)
			max=a[i];
			t=i;
	}
	return t;
}

int main(){
	int a[6];
	getRandom(a,6);
	cout<<getMax(a,6);
	return 0;
}
