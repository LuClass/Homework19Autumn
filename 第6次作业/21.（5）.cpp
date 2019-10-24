#include<iostream>
using namespace std;
int Prime(int n)
{
	int m;
	m=n;
	while(n>1){
		for(int i=2;i<=n;i++){
		
			if(n%i==0){
				if(n==i)
				cout<<i;
				else
				cout<<i<<"*";
				n=n/i;
				
				break;
			}	
		}
		
		
	}   
}
int main(){
	int m;
	cout<<"请输入正整数x="; 
	cin>>m;
	cout<<m<<"=";
	Prime(m);
	
	
	return 0;
}
