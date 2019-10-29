//作业（6）
#include<iostream>
using namespace std;

//都是运用辗转相除法 
//递推方案 
int gcd1(int a, int b) {
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
} 	

//递归方案 
int gcd2(int a,int b){
	if(b == 0)
	return a;
	else
	return gcd2(b,a%b);
}

//最小公倍数=乘积/最大公约数 
int lcm(int a, int b){
	return a*b/gcd1(a, b);
}	

//测试 
int main(){
	int a=8,b=6;
	int c=15,d=4; 
	cout<<gcd1(a,b)<<endl;
	cout<<gcd2(a,b)<<endl;
	cout<<gcd1(c,d)<<endl;
	cout<<gcd2(c,d)<<endl;
	cout<<lcm(a,b)<<endl;
	cout<<lcm(c,d)<<endl;
	return 0;
}
