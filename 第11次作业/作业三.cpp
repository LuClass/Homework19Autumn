#include <iostream>
using namespace std;
int f(int a){
	int b=0;
	if (a==1)
	return 0;
	for (int k=1;k<a;k++){ 
	if (a%k==0){
	b+=k;
	}
	if (b==a)
	return 1;} 
}
int g(int a,int b){
	for (;a<=b;a++){
	if (f(a)==1)
	cout<<a;
	}
}
int main(){
	int a, b;
	cin>>a>>b;
	g(a,b);
}
