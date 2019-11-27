#include <iostream>
using namespace std;
unsigned f(unsigned a,unsigned b){
	unsigned c,d;
	if(a<b){
		c=a;a=b;b=c;
	}
	while(1){
	    d=a%b;
		if(d==0)
		break;
		a=b;b=d;
	}
	return b;
	}
unsigned h(unsigned a,unsigned b){
	return a*b/f(a,b);
}
int main(){
	unsigned a,b;
	cout<<"输入两个正整数"<<endl;
	cin>>a>>b;
	cout<<"最大公因数为"<<f(a,b)<<endl;
	cout<<"最小公倍数为"<<h(a,b)<<endl; 
}
	
