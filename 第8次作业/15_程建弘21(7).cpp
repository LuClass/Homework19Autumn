/*
(7)设计一个程序，把输入的整数逐位反序输出。 比如输入 3456，输出 6543。
*/ 
#include<iostream>
using namespace std;
void ditui(int a){
	if(a==0){
		return;
	}
	cout<<a%10;
	ditui(a/10);
} 
int m=0;
int digui(int a){
	if(a==0){
		return m;
	}
	m=m*10+(a%10);
	a/=10;
	digui(a);
}
int main(){
	cout<<"请输入一个整数"<<endl;
	int x;
	cin>>x;
	cout<<"递推算法的反序输出为：" <<endl;
	ditui(x);cout<<endl; 
	cout<<"递归算法的反序输出为：" <<endl;
	cout<<digui(x)<<endl;	
}
