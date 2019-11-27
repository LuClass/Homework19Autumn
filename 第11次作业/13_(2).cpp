#include<iostream>
using namespace std;

int main(){
	int i,k=0;
	int a[10];
	cin>>i;
	while(i!=0){
		a[k] = i%10;
		k++;
		i/=10;
	}
	int j=0,z=k-1;
	for(;j<=z;j++,z--){
		if(a[j]!=a[z]){
			cout<<"Flase";
			break;
		}		
	}
	if(j>z){
		cout<<"Ture";
	}
	return 0;
}
