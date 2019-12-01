#include<iostream>
#define N 21
using namespace std;
int main(){
	int i=0,count=0,out=0;
	int a[N]={0};
	while(1){
		if(a[i]==0){
			if(out==N-1)
				break;
			count++;
			count%=5;
			if(count==0){
				out++;
				a[i]=1;
			}
		}
		i++;
		i%=N;
	}
	cout<<i+1;
}
