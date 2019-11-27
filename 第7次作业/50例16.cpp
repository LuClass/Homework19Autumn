#include <iostream>
using namespace std;
int main(){
	int m,n,a,b,i;
	cout<<"请输入两个正整数：";
	cin>>m>>n;
	if(m<n){
	   i=m;
	   m=n;
	   n=i;
	   }
	a=m;
	b=n;
	while(b!=0)
	{
		i=a%b;
		a=b;
		b=i; 
	}
	cout<<"最大公约数为："<<a;
	cout<<"最小公倍数为："<<m*n/a;
	return 0; 
}

