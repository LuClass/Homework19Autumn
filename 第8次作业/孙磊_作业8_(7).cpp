#include<iostream>
using namespace std;

//定义转换函数 
int turn(int n){
	int sum=0;
	while(n!=0){
		sum=sum*10+n%10;
		n/=10;
	}	
	return sum;	
}
//测试 
int main(){
	int n;
	while(cin>>n){
		cout<<turn(n)<<endl;
	}
	return 0; 	
} 
