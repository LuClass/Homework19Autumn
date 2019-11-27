//例23，改平行四边形
#include<iostream>
using namespace std;
#include "conio.h"
int main() {
	int l,d;
	cout<<"输入底边长度l，和高度d：";
	cin>>l>>d;
	cout<<"第一种平行四边形："<<endl; 
	for(int i=1; i<=d; i++) {
		int k=i-1;
		while(k) {
			cout<<' ';
			k--;
		}
		for(int j=1; j<=l; j++) {
			cout<<'*';
		}
		cout<<endl;
	}
	cout<<endl<<"第二种平行四边形："<<endl;
	for(int i=d; i>=1; i--) {
		int k=i-1;
		while(k) {
			cout<<' ';
			k--;
		}
		for(int j=1; j<=l; j++) {
			cout<<'*';
		}
		cout<<endl;
	}
	
	return 0;
}

