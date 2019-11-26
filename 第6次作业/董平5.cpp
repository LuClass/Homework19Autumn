#include <bits/stdc++.h>
using namespace std;
queue<int >q;
int num[10001],l=0;

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

void exe(int m){
    while(!isPrime(m)){
        for(int i=2;i<=sqrt(m);i++){
            if(m%i==0){
                num[l]=i;
                l++;
                m/=i;
                break;
            }
        }
    }
    num[l]=m;
    l++;
return ;
}



int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    while(!q.empty()){
        q.pop();
    }
    int n;
    cin>>n;
    exe(n);
    for(int i=0;i<l-1;i++){
        cout<<num[i]<<"*";
    }
    cout<<num[l-1];
return 0;
}
