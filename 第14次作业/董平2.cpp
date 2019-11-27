#include <bits/stdc++.h>
using namespace std;
const int eps=1e-6;

struct node{
    double x;
    double y;
};

double getlen(node a,node b){
return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

bool tgle(node a,node b,node c){
    double k1,k2;
    if(a.y-b.y == 0)k1=2147483647;
    else k1=(a.x-b.x)/(a.y-b.y);
    if(a.y-c.y == 0)k2=2147483647;
    else k2=(a.x-c.x)/(a.y-c.y);
    //cout<<k1<<" "<<k2<<endl;
    if(abs(k1-k2)<=eps)return true;
    else return false;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n;
    node a1,a2,a3;
    cin>>a1.x>>a1.y;
    cin>>a2.x>>a2.y;
    cin>>a3.x>>a3.y;
    cout<<getlen(a1,a2)<<endl;
    if(tgle(a1,a2,a3)==true)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


