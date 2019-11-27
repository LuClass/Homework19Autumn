#include <bits/stdc++.h>
using namespace std;

void exe(int num){
    if(num<=0)return ;
    cout<<num%10;
    exe(num/10);
return ;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n;
    cin>>n;
    exe(n);
    return 0;
}


