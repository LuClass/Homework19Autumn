#include <iostream>
using namespace std;
int weihe(int n);
int zhihe(int n);
int minzhi(int n);
bool isSmith(int n){
	if(weihe(n)==zhihe(n))
	return true;
	else 
	return false;
}
int weihe(int n){
	int a,b;
	int c=0;
	for(a=n,b=n;b>9;a=b){
	a=n%10;
	b=n/10;
	c=c+a;	
	}
	if(n>9)
	return c+b;
	else
	return n;
}
bool iszhi(int x){
    int y;
	for(int i=1;i<x;i++){
	if(x/i==0)
	y=y+i;	
	}
	if(y=1)
	return true;
	else
	return false;
}
int minzhi(int x){
for(int i=2;i<x;i++){
	if(iszhi(i)&&x%i==0)
	return i;
	break;
}
	
}
int zhihe(int n){
	int a,b,c,d;
	for(a=n,b=n;b!=1;a=b){
		c=a;
		a=minzhi(a);
		b=c/a;
		d=d+weihe(a);
	}
	return d;
}
int  main(void){
	int i;
	for(i=493774;i>493772;i++){
		if(!iszhi(i)&&isSmith(i))
	{	cout<<"smith is"<<i;
		break;}
	}
	return 0;
}









