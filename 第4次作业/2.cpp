#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n=2;
    int a=3,b=2,tmp;
    cout<<"1/2"<<endl;
    for(int i=2;i<=20;i++){
        cout<<a<<"/"<<b<<endl;
        tmp=a;
        a=a+b;
        b=tmp;

    }
    return 0;
}
