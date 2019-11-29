#include <iostream>
using namespace std;
int f(int a){
	int k,m,n;
	k=a/100;m=a/10%10;n=a%10;
	if (a==k*k*k+m*m*m+n*n*n)
	return 1;
}
int g(int a,int b){
	if (a>1000)
	cout<<"error";
	for (;a<=b;a++){
	if (f(a)==1)
	cout<<a<<" ";
	}
}
int main (){
	int a,b;
	cin>>a>>b;
	g(a,b);
}
