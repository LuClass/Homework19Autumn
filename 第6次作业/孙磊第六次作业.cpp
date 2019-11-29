//作业6-21  2019年10月23日 
#include<iostream>
#include<cmath> 
using namespace std;
//(2)各位数之和 
int digitSum(int x){
	int sum=0;
	while(x!=0){
		sum=sum+x%10;
		x/=10;
	}
	return sum;
} 

//(4)求素数函数
bool isPrime(int n){
	if(n==1||n==2) return true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
} 

//(5)分解因数函数
void primeFac(int n){
	cout<<n<<'='; 
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			cout<<i;
			if(n!=1) cout<<'*';
		}
	}
	if(n!=1) cout<<n;
} 


int main(){
	int x=987,y=345 ;
	cout<<"第（2）题，测试数据x=987,y=345:"<<endl; 
	cout<<"987各位数之和："<<digitSum(x)<<endl;
	cout<<"345各位数之和："<<digitSum(y)<<endl<<endl;
	cout<<"-------------分割线----------------"<<endl;
	cout<<"第（4）题，输出500以内孪生素数"<<endl; 
	for(int i=1;i<=500;i++){
		if(isPrime(i)&&isPrime(i+2))
			cout<<i<<' '<<i+2<<endl;
	}
	cout<<endl;
	cout<<"-------------分割线----------------"<<endl; 
	cout<<"第（5）题，输入需要分解质因数的正整数："; 
	int m;
	cin>>m;
	primeFac(m);
	return 0;
}
