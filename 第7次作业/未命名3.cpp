#include <iostream>
using namespace std;
int main(){
	int a,b,c=1,d,e,x,y;
	cout<<"依次输入两个正整数a,b的值"<<endl;
	cin>>a>>b;
	x=a;
	y=b;
	if(a<b){
	c=a;a=b;b=c;
	}
	 while(c!=0){
	 c=a%b;
	 if(c==0)
	 break;
	 d=a/b;
	 if(d<b){
	a=b;b=d;}
	else
	b=d;
	 
	 }
	 cout<<"最大公约数为"<<b<<endl; 
	 e=x*y/b;
	 cout<<"最小公倍数为"<<e<<endl;
}
