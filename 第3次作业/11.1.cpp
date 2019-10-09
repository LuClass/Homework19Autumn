#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int res=0,j=1;
	while(n){
		res=res+j*(n%2);
		n=n/2;
		j=j*10;
	}
	cout<<res;
	return 0;
}
