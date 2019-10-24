using namespace std;
#include <iostream>
int GCD(int m,int n)
{
	if(m%n==0)
    return n;
    else
    return GCD(n,m%n);	 
}
int LCM(int m,int n)
{
	int gcd=GCD(m,n);
	return m*n/gcd;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<"最大公约数为："<<GCD(m,n)<<" 最小公倍数为："<<LCM(m,n); 
	return 0;
}
