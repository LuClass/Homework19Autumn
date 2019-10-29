#include <iostream>
using namespace std;
int main ()
{
	int m,n,v,a,b,c;
	cin>>m>>n;
	if(m<n){
		v=m;
		m=n;
		n=v;}
	a=m;b=n;
	if(m%n==0){
		cout<<"最大公约数为"<<b<<endl;
		cout<<"最小公倍数为"<<a<<endl;} 
	else{
		while(b!=0){
			c=a%b;
			a=b;
			b=c;}
		cout<<"最大公约数为"<<a<<endl;
		cout<<"最小公倍数为"<<m*n/a<<endl;}
	return 0;
}
