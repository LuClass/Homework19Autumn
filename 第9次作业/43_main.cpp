#include<iostream>
using namespace std;

#include"43_hex.h"
#include"43_max.h"

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"max="<<max(a,b)<<endl;
	cout<<"(hex)max=";
	toHex(max(a,b));
	return 0;
} 
