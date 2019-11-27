#include <iostream>
using namespace std;
int factorial(int n){
	if (n==1)
	    return 1;
	else
	    return n*factorial(n-1);
}
int C(int n,int k){
	return factorial(n)/(factorial(k)*factorial(n-k));
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<C(n,k)<<endl<<endl;
	cout<<"C(4,2)="<<C(4,2)<<endl;
	cout<<"C(6,4)="<<C(6,4)<<endl;
	cout<<"C(8,7)="<<C(8,7);
}


 
