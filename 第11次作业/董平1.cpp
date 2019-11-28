#include <bits/stdc++.h>
using namespace std;

int exe(int num){
    int sum=0,s=num;
    while(num>0){
        sum+=(num%10)*(num%10)*(num%10);
        cout<<sum<<endl;
        num/=10;
    }
    cout<<sum<<" "<<s;
    if(s==sum)return true;
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



