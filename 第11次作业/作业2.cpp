#include <iostream>
using namespace std;
int f(int a){
	int b,i=1;
	while(1){
	i*=10;
	b=a/i;
	if (b==0)
	break;
	}
	return i/10;
}
int g(int a){
	int b,count =0;
	for (int i=1;a/i>0;i*=10){
	b=(a/i%10)*(g(a)/i);
	count +=b;
	}
	return count;
}
int main (){
	int a;
	cin>>a;
	g(a);
}
