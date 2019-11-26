#include <iostream>
using namespace std;
bool isshui(int n){
	int a,b,c,d;
	a=n%10;
	b=n/10%10;
	c=n/10/10%10;
	d=a*a*a+b*b*b+c*c*c;
	if(d==n)
	return true;
	else 
	return false;
}

int main (void){
	int i,j;
	cout<<"i=";
	cin>>i;
	cout<<"j=";
	cin>>j;
	int x=0;
	if(i>j){
		x=i;
		i=j;
		j=x;	
	}
	if(i<100)
	i=100;
	if(j>999)
	j=999;	
	for(int a=i;a<=j;a++){
		if(isshui(a))
		cout<<a<<endl;	
	}
	return 0;
}
