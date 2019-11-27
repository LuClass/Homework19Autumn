#include <bits/stdc++.h>
using namespace std;

int exe(int num){
    int i,sum=0;
    for(int i=1;i<num;i++)if(num%i==0)sum+=i;
return sum;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<n;i++)if(n%i==0)cout<<i<<" ";
    cout<<endl;
    cout<<1<<" ";
    for(int i=2;i<=100;i++){
        if(exe(i)==i)cout<<i<<" ";
    }
    return 0;
}
