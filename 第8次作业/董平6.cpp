#include <bits/stdc++.h>
using namespace std;

int exe(int n,int m){
    int t=0;
    while(n%m != 0){
        t=n;
        n=m;
        m=t%m;
    }
return m;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int a,b;
    cin>>a>>b;
    cout<<exe(a,b)<<" "<< a*b/exe(a,b) <<endl;

    return 0;
}


