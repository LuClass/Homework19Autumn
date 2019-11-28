#include <bits/stdc++.h>
using namespace std;
void switchh(int n){
    unsigned int test=1<<sizeof(n)*CHAR_BIT-1;
    int sp=1;
    while (test){
    putchar(test&n?'1':'0');
    test>>=1;
    }
    cout<<endl;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n,i=0;
    cin>>n;
    switchh(n);
return 0;
}
