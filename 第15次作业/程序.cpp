#include<iostream>
using namespace std;
int Fraction(int a, int b){
	int k;
	if(b<=0){
		return 0;
	}
	if(a<0){
		k=-a;
	}
	for(int n=2;n<(k<b?k:b);n++){
		if(a%n==0&&b%n==0){
			a=a/n;
			b=b/n;
	        n=1;
		}
		
	}
	
}
int main(){
	int a,b;
	cin>>a>>b;
	Fraction(a,b);
	cout<<a<<"/"<<b;
	return 0;
}
