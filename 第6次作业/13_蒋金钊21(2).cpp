#include<iostream>
using namespace std;

int factorial(int n){
	int re = 1 ;
	for(int i=1;i<=n;i++){
		re *= i;
	}
	return re;
}

int combination(int n, int k){
	int re;
	re = factorial(n)/factorial(k)/factorial(n-k) ;
	return re;
}

int main(){
	cout<<"C(4,2)="<<combination(4,2)<<endl;
	cout<<"C(6,4)="<<combination(6,4)<<endl;
	cout<<"C(8,7)="<<combination(8,7)<<endl;
	
	return 0;
}
