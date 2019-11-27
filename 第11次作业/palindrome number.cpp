#include<iostream>
using namespace std;
bool isPa(long m){
	long t=m,n=0;
	while(t){
		n=n*10+t%10;
		t=t/10;
	}
	return m==n;
}
int main(){
	long num;
	cin>>num;
	cout<<isPa(num)<<endl;
	return 0;
}
