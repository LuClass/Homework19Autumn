#include<iostream>
#include<cmath>
using namespace std;
struct result{
    result(bool f){flag=f;};
    result(double a,double b,bool f=false) {res[0]=a;res[1]=b;flag=f;};
    bool flag;
    double res[2];
};
result GetResult(int a,int b,int c){
    int value=b*b-4*a*c;
    if(value<0){
        result re(true);
        return re;
    }
    else{
        result re((double)(-b+sqrt(value))/2*(double)a,(double)(b+sqrt(value))/2*(double)a);
        return re;
    }
       
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    result re=GetResult(a,b,c);
    if(re.flag)
        cout<<"NULL"<<endl;
    else{
        cout<<re.res[0]<<" "<<re.res[1]<<endl;
    }
    system("pause");
    return 0;
}