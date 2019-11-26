//(1) 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int i, j;
	cout<<"Input i & j:"<<endl;
	while(cin>>i>>j){
		if(i>j) swap(i, j); //交换 
		for(i;i<=j;i++){
			int sum=0, a=i;
			while(a!=0){
				sum+=pow(a%10, 3);//求各位数三次方 
				a/=10;
			}
			if(i == sum) cout<<i<<endl; //判断 
		}
	} 
	return 0;
 } 
