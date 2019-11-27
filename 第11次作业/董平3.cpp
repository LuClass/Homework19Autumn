#include <bits/stdc++.h>
using namespace std;

int exe(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0)sum+=i;
    }
    if(num==sum)return true;
return false;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int m,n;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(exe(i)==true){cout<<i<<" ";}
    }
    return 0;
}



