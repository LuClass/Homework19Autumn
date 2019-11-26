#include<iostream>
#include<math.h>
using namespace std;

bool is_prime_number(int x){
	 int m = sqrt(x);
	 for(int i=2;i<=m;i++){
	 	if(x%i==0){
	 		return false;
		 }
	 }
	 return true;	
}

int main(){
	int x;
	cout<<"请输入正整数x:";
	cin>>x;
	cout<<x<<"="; 
	for(int i=2;i<=x;){
		if(is_prime_number(i)){
			if(x%i==0){
				cout<<i;
				if(i!=x){
					cout<<"*";
				}
				x/=i;
				i=2;
			}
			else{
				i++;
			}
		} 
		else{
			i++;
		}
	} 
	return 0;
}
