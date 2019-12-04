#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>

bool isPrimeNumber(int x){
	 int m = sqrt(x);
	 for(int i=2;i<=m;i++){
	 	if(x%i==0){
	 		return false;
		 }
	 }
	 return true;	
}

void getPrimeFactor(int a[],int x){
	int k=0;
	for(int i=2;i<=x;){
		if(isPrimeNumber(i)){
			if(x%i==0){
				a[k] = i;
				k++;
				x/=i;
				i=2;
			}
			else{
				i++;
			}
		} 
		else{
			i++;
		}
	} 
}

bool isSmith(int n){
	 int a[20];
	 memset(a,0,sizeof(a));
	 getPrimeFactor(a,n);
	 int sum1=0,sum2=0;
	 while(n!=0){
	 	sum1 += (n%10);
	 	n /= 10;
	 }
	 int i=0;
	 while(a[i]!=0){
	 	int j = a[i];
	 	if(j<10){
	 		sum2 += j;
		 }
		 else{
		 	while(j!=0){
		 		sum2 += j%10;
				 j /= 10;  
			 }
		 }
		 i++;
	 }
	 if(sum1==sum2) return true;
	 else return false;
	 
}

int main(){
	
	for(int i=4937774;;i++){
		if(!isPrimeNumber(i)){
			if(isSmith(i)){
				cout<<i;
				break;
			}
		}
	}
	
	return 0;
}
