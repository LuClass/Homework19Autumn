#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int l;
    char a[1001];
    cin>>a;
    l=strlen(a);
    cout<<a<<endl;
    for(int i=0;i<l;i++){
        if(a[i]>='A' && a[i]<='Z')printf("%c",a[i]-'A'+'a');
        else cout<<a[i];
    }
    cout<<endl;
    return 0;
}


