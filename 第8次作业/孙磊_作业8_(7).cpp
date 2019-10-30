#include<iostream>
using namespace std;

//定义转换函数 
//递推方案 
void turn1(int n){
	while(n){
		cout<<n%10;
		n/=10;
	}		
}

//递归方案
void turn2(int n){
	if(n){
		cout<<n%10; 
		turn2(n/10);
	}
}

//测试 
int main(){
	int n;
	while(cin>>n){
		turn1(n); cout<<endl;
		turn2(n); cout<<endl;
	}
	return 0; 	
} 
