#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	for(int a=100;a<=999;a++){
		b=a%10;
		c=a/10;
		d=c%10;
		e=c/10;
		f=b*b*b+d*d*d+e*e*e;
		if(a==f)
		cout<<a<<"\t";
	}
		
}
