#include <bits/stdc++.h>
using namespace std;

struct Faction{
    int x,y;
};

int gcd(int a,int b){
    int tmp=b;
    while(a%b!=0){
        tmp=b;
        b=a%b;
        a=tmp;
    }
return b;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int a,b,c,d;
    Faction t1,t2;
    cin>>a>>b>>c>>d;
    t1.x=a;
    t1.y=b;
    t2.x=c;
    t2.y=d;

    if(t1.x/t1.y == t2.x/t2.y)cout<<"a=b"<<endl;
    else if(t1.x/t1.y > t2.x/t2.y)cout<<"a=b"<<endl;
    else cout<<"a<b"<<endl;
    int s=gcd(b,d);

    s=b*d/s;

    t1.x*=s/t1.y;
    t1.y=s;
    t2.x*=s/t2.y;
    t2.y=s;
      //cout<<gcd(t1.x+t2.x,t2.y)<<endl;
    cout<<"a+b="<<(t1.x+t2.x)/gcd(t1.x+t2.x,t2.y)<<"/"<<t2.y/gcd(t1.x+t2.x,t2.y);
    cout<<"a*b="<<(t1.x*t2.x)/gcd(t1.x*t2.x,t2.y)<<"/"<<t2.y/gcd(t1.x*t2.x,t2.y);
    cout<<"a-b="<<(t1.x-t2.x)/gcd(t1.x-t2.x,t2.y)<<"/"<<t2.y/gcd(t1.x-t2.x,t2.y);


    return 0;
}


