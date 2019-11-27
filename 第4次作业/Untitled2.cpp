#include <iostream>
using namespace std;
int main(){
	int a=1,b=2,c=1,d;
	cout<<a<<"/"<<b<<endl;
	a=a+b;
	while(c<20){
		cout<<a<<"/"<<b<<endl;
		d=a;
		a=a+b;
		b=d;
	    c++;}
	    return 0;
	}

