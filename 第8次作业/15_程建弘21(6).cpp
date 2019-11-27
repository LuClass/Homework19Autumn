/*
(6)编写两个函数分别计算两个整数的最大公约数和最小公倍数
*/ 
#include<iostream>
using namespace std;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	cout<<"请输入两个整数"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"两个整数的最大公约数是："<<gcd(x,y)<<endl;
	cout<<"两个整数的最小公倍数是："<<lcm(x,y)<<endl;
} 
