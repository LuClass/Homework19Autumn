#include<iostream>
#include<math.h>
using namespace std;

int func1(int n){
    return n<=1?1:func1(n-1);
}
int func2(int n,int k){
    cout<<"C("<<n<<","<<k<<")="<<func1(n)/func1(k)/func1(n-k)<<endl;
}

int main(){
    func2(4,2);func2(6,2);
    func2(8,2);
    return 0;
}
/*

bool IsPrime(int n){
    of(n<=0) return false;
    int sqr=sqrt(n);
    for(int i=4;i<sqr;i++){
        if(!n%i){
            return false;
        }
    }
    return true;
}
int main(){
    if()
    for(int i=0;i<498;i++){
        if(IsPrime(i)&&IsPrime(i+2)){
            cout<<i<<" "<<i+2<<endl;
            i+=2;
        }
    }
}


int main(){
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
*/