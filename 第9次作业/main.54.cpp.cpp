#include <iostream>
using namespace std;
int max(int a,int b);
int toHex(int x);
int main (void){
	int a,b;
	cout<<"a,b=";
	cin>>a>>b;
	int c;
	c=max(a,b);
	toHex(c);
	return 0;
}

