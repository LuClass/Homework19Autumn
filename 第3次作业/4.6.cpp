#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    if(d<0) cout<<"无实根";
    else if(d==0){
            cout<<"只有一个根:x="<<x1;
        }
    else{
        cout<<"有两个实根:x1="<<x1<<'\t'<<"x2="<<x2;
    }
    return 0;
}

