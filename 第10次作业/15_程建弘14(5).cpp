 /*
 (5)编写一个函数： bool isSmith(int n)， 判断一个正整数 n 是否为 Smith 数。
Smith 数的概念：一个非素数，其各位数之和等于其所有质因数的各位数之和。
例如：
4 = 2 * 2， 4 = 2 + 2，所以 4 就是一个 Smith 数。
22 = 2 * 11， 2 + 2 = 2 + 1 + 1， 22 也是一个 Smith 数。
27 = 3 * 3 * 3， 2 + 7 = 3 + 3 + 3， 27 也是一个 Smith 数。
尝试计算大于等于 4937774 的下一个 Smith 数
*/ 

//----------------------------------------- 
//大于等于 4937774 的下一个 Smith 数输出结果 
//4937775 
//----------------------------------------- 
#include<iostream>
#include<math.h>
using namespace std;

int cal(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
bool isSmith(int n){
	int sum1=cal(n);
	
	int sum2=0,temp=n;
	while(temp!=1){
		for(int i=2;i<n;i++){
			if(temp%i==0){
				sum2+=cal(i);
				temp=temp/i;
				break;
			}
		}		
	}
	if(sum1==sum2){
		return true;
	}
	return false;
}
bool isPrime(int n)
{
	if(n<=1)return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++)
		if(n%i==0)return false;
	return true;
}
int main(){
	//cout<<"请输入一个非素数，来计算其之后的Smith 数"<<endl; 
	//cin>>top;
	cout<<"大于等于 4937774 的下一个 Smith 数"<<endl;
	int top=4937774;
	top++;
	if(isPrime(top)) {
		top+=1;
	}
	while(!isSmith(top)){
		top++; 
		if(isPrime(top)) {
			top+=1;
		}
	}
	cout<<"该数为："<<top<<endl;
} 
 
