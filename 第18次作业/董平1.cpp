#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n=0,m=0;
    char a[1001],b[1001];
    cin>>a;
    cin>>b;
    while(a[n]!='\0')n++;
    while(b[m]!='\0')m++;
    for(int i=n;i<n+m;i++)a[i]=b[i-n];

    a[n+m]='\0';
    cout<<a<<endl;
    return 0;
}


