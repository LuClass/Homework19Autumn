#include <bits/stdc++.h>
using namespace std;
char a[10001];
int b[10001],now=0,n;

int execution(int l){
    int ans=0;
    while(a[now]>='0' && a[now]<='9' && !now>n){ans*=10;ans+=a[now];now++;}
return ans;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int sum;
    cin.getline(a,10000);
    n=strlen(a);
    while(now<n){
        if(a[now]>='0' && a[now]<='9'){
            b[sum]=execution(now);
            sum++;
        }
        else now++;
    }
    for(int i=0;i<sum;i++)cout<<b[i]<<endl;
    return 0;
}


