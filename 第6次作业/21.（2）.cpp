#include<iostream>
using namespace std;

int mult(int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}
int comnum(int n,int k){
    int C;
    C = mult(n)/mult(k)/mult(n-k);
    return C;
			
		}
		
int main(){
	cout<<"C(4,2)="<<comnum(4,2)<<endl;
	cout<<"C(6,4)="<<comnum(6,4)<<endl;
	cout<<"C(8,7)="<<comnum(8,7)<<endl;
	
	return 0;
}

