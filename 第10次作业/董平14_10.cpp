#include <bits/stdc++.h>
using namespace std;
int n=21,m=5,k=5;
int main(){
    int s=0;
    for (int i=2;i<=n;i++)s=(s+k)%i;
    int ans;
    ans=(m-k+s+1)%n;
    if (ans<=0) ans+=n;
    printf("%d\n",ans);
    return 0;
}
