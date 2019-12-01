#include<iostream>
using namespace std;
#include"max33.cpp"
#include"hex33.cpp"
int main(){
	int a,b,m;
	cin>>a>>b;
	m=max(a,b);
	cout<<toHex(m);
}
