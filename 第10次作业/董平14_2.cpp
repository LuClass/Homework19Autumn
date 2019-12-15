#include <bits/stdc++.h>
using namespace std;
int a[10001];

int getMax(int n){
    int pos=0,mx=-2147483647;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
            pos=i;
        }
    }
return pos;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        srand((unsigned)time(NULL));
        a[i]= rand();
    }
    cout<<getMax( n);
    return 0;
}


