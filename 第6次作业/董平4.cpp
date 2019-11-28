#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){	//返回1表示判断为质数，0为非质数，在此没有进行输入异常检测
	float n_sqrt;
	if(n==2 || n==3) return 1;
	if(n%6!=1 && n%6!=5) return 0;
	n_sqrt=floor(sqrt((float)n));
	for(int i=5;i<=n_sqrt;i+=6)
	{
	    if(n%(i)==0 | n%(i+2)==0) return 0;
	}
        return 1;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n;
    for(int i=3;i<=500;i++){
        if(isPrime(i)==1 && isPrime(i+2)==1 )cout<<i<<" "<<i+2<<endl;
    }
    return 0;
}
