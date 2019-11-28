#include<iostream>
#include<math.h>
/*
 *黄海浪 9181040G0818
 *2019.11.08
 *第 11 次作业
 */
using namespace std;

bool is_ppdi(int n){
    if(n<100||n>999) return false;
    int sum = 0 , tmpn = n;
    while(tmpn){
        sum += pow((tmpn%10),3);
        tmpn/=10;
    }
    if(n==sum) return true;
    return false;
}

bool is_hws(int n){
    int sum = 0,tmp = n;
    while(tmp){
        sum *= 10;
        sum += tmp%10;
        tmp /= 10;
    }
    if(sum == n) return true;
    return false;
}
bool is_wqs(int n){
    if(n<2) return false;
    int sum = 1;
    for(int i=2;i<n/i;++i){
        if(!(n%i)){
            sum+=i+n/i;
        }
    }
    if(sum == n) return true;
    return false;
}

int main(){
    {//T1
        int m,n;
        cin>>m>>n;
        for(int i = m;i<=n;++i){
            if(is_ppdi(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
    {//T2
        int n ;
        cin>>n;
        if(is_hws(n)) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
    {//T3
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;++i){
            if(is_wqs(i))    cout<<i<<" ";
        }
        cout<<endl;
    }
}
