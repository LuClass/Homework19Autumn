#include<iostream>
using namespace std;
int main(){
	int C(int x,int y);
	cout<<C(4,2)<<endl<<C(6,4)<<endl<<C(8,7);
}

int C(int x,int y){
		int z;
		int X(int x);
		z=X(x)/(X(y)*X(x-y));
		return z;
	}
int X(int x){
	int i,a=1;
	for(i=1;i<=x;i++){
		a*=i;
	}
	return a;
}
	 

