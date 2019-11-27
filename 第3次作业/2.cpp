#include <bits/stdc++.h>
using namespace std;
int a[100011];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    double a,b,c,ans;
    cin>>a>>b>>c;
    if(b*b-4*a*c<0){cout<<"No answer"<<endl;return 0;}
    if(b*b-4*a*c==0){cout<<"There are one answer:"<<(-b)/2*a;return 0;}
    cout<<"There are two answers:"<< ((-b)+sqrt(b*b-4*a*c))/2*a <<" "<<((-b)-sqrt(b*b-4*a*c))/2*a<<endl;

    return 0;

}
