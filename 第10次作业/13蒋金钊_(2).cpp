#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
using namespace std;
#define random(x) rand()%(x)


void getRandom(int a[],int n){
	 int i=0;
	 srand((int)time(0));
	 for(i;i<n;i++){
	 	a[i] = random(101);
	 }
	 return ;
}

int getMax(const int a[],int n){
	int max,i=0,k=0;
	for(i,max=a[i];i<n;i++){
		if(a[i]>max){
			max = a[i];
			k = i;
		}
	}
	return k;
}


int main(){
	int n;
	cout<<"Input the size of the array:";
	cin>>n;
	int* a = (int*)calloc(n,sizeof(int));
	getRandom(a,n);
	cout<<"The array is:";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"the index of the max number is:"<<getMax(a,n);
	free(a);
	return 0;
} 
