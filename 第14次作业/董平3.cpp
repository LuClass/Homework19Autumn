#include <bits/stdc++.h>
using namespace std;

struct node{
    double wer1;
    double wer2;
    bool p;
};

void f(int a,int b,int c){
    node aa;
    double delta=b*b-4*(a*c);
    if(delta<0){
        aa.p=0;
        return ;
    }
    else {
        aa.wer1=(-b+sqrt(delta))/(2*a);
        aa.wer2=(-b-sqrt(delta))/(2*a);
        aa.p=1;
    }
return;
}


int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    f(a,b,c);
    ///You may use the function here
    return 0;
}

