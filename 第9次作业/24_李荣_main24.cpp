#include<iostream>
#include"hex24.h"
#include"max24.h"
using namespace std;
int main(){
	int a,b,x;
	cin>>a>>b;
	x=max(a,b);
	cout<<"max=(hex)";
	toHex(x);
	return 0;
}
