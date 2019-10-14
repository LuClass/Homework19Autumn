#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n,sum=0;
    char a[10001];
    cin>>a;
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]>='0' && a[i]<='9')sum++;
    }
    cout<<sum<<endl;
    return 0;
}

