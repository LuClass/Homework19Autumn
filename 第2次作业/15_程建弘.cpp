/*
23.
if(x>2&&x%2==0)
24.
if(x>8||x<-8)
25.
A 0		B 0.333333		C 1		D 7
26.
A 4		B 27			C 8		D 162
27.
A 1		B 1				C 31	D 0

*/
#include<iostream>
using namespace std;
int main(){
	double C,F,K;
	cin>>"请输入温度"; 
	cin>>C;
	F=C*1.8+32;
	k=C+273.15;
	cout<<"华氏温度为"<<F<<endl;
	cout<<"绝对温度为"<<K<<endl;
	return 0;
} 


