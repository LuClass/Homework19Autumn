#include <iostream>
#include <math.h>
/*
*黄海浪 9181040G0818
*2019.10.24
*第 6 次作业
*/

using namespace std;

int fac(unsigned int n){
    if(n==1||n==0) return 1;
    return n*fac(n-1);
}
int getc(int n,int k){
    return fac(n)/fac(k)/fac(n-k);
}

bool prime(unsigned int n){
    if(n==2||n==3) return 1;
    if(!(n%2)) return 0;
    int t = sqrt(n)+5;
    for(int i=3;i<t;i+=2){
        if(!(n%i)) return 0;
    }
    return 1;
}

int main() {
    {
        //21.(2)
        cout<<"//T21.(2)"<<endl;
        cout<<getc(4,2)<<endl;
        cout<<getc(6,4)<<endl;
        cout<<getc(8,7)<<endl;
    }
    
    {
        //T21.(4)
        cout<<"//T21.(4)"<<endl;
        for(int i=2;i<499;++i){
            if(prime(i)&&prime(i+2)){
                cout<<i<<" "<<i+2<<endl;
            }
        }
    }
    {
        //T21.(5)
        cout<<"//T21.(5)"<<endl;
        unsigned int n;
        cin>>n;
        cout<<n<<"=";
        if(n==1) cout<<1;
        for(int i=2;i<=n;++i){
            if(!(n%i)){
                if(n==i){
                    cout<<i;
                    break;
                }else{
                    n/=i;
                    cout<<i<<"*";
                    --i;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
