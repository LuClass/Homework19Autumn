#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n,k;
    long long sum=1;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        sum*=i;
    }//cout<<sum<<endl;
    for(int i=1;i<=k;i++){
        sum/=i;
    }//cout<<sum<<endl;
    for(int i=1;i<=n-k;i++){
        sum/=i;
    }
    cout<<sum<<endl;
    return 0;
}


