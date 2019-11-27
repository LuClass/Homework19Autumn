/*
(5)设计一个程序，对于输入的一个正整数 x，
分解质因数并按从小到大次序输出所有质因数。例如，
12=2*2*3， 13=13， 14 = 2*7
*/ 

#include<iostream>
#include<iomanip>
using namespace std;
int s[1010],num=0;
void figure(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0){
			s[num++]=i;
			n=n/i;
			if(n==1){
				break;
			}
			figure(n);
			break;
		}
	}
}
int main(){
	int x;
	cout<<"请输入一个正整数"<<endl;
	cin>>x;
	figure(x);
	cout<<"分解质因数: "<<x<<" = ";
	cout<<s[0];
	for(int i=1;i<num;i++){
		cout<<"*"<<s[i];
	}
}

