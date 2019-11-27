#include<iostream>
using namespace std;

bool judge(int a){
	int i;
	if(a==2||a==3||a==5) return true; 
	for(i=2;i*i<=a;i++){
		if(a%i==0) return false;
	}
	return true;
}

void div(int a){
	int i;
	for(i=2;i<=a;i++){
		if(a==1) break;
		if(judge(i)&&(a%i==0)){
			while(a%i==0){
				if(a==i){
					cout<<i;
					a/=i;
					break;
				}
				cout<<i<<"*";
				a/=i;
			}
		}
	}
}

int main(){
	int x;
	cin>>x;
	cout<<x<<"=";
	div(x);
	return 0;
}
