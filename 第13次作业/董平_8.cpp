#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    char str[100];
    scanf("%[^\n]",str);
    int l=strlen(str);
    int sum=1;
    for(int i=0;i<l;i++){
        if(str[i]==' ')sum++;
    }
    cout<<sum<<endl;
    return 0;
}


