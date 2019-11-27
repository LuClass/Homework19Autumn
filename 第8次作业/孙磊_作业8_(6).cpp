//作业（6）
#include<iostream>
using namespace std;

//运用辗转相除法 
//最大公约数
int gcd(int a,int b){
	if(b == 0)
	return a;
	else
	return gcd(b,a%b);
}

//最小公倍数=乘积/最大公约数 
int lcm(int a, int b){
	return a*b/gcd(a, b);
}	

//测试 
int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<gcd(a,b)<<endl;
		cout<<lcm(a,b)<<endl;	
	}
	return 0;
}
