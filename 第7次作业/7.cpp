#include<iostream>
using namespace std;
int func(int a,int b){
    return a?func(b%a,a):b;
}

int main() {
    {
        long long i;
        int var1,var2,var3,var4,var5,var6;
        cin>>i;
        var1=100000*0.1;
        var2=var1+100000*0.75;
        var3=var2+200000*0.5;
        var4=var3+200000*0.3;
        var5=var4+400000*0.15;
        switch ((i-1)/100000) {
            case 0:
                var6=i*0.1;
                break;
            case 1:
                var6=var1+(i-100000)*0.075;
                break;
            case 2:
            case 3:
                var6=var2+(i-200000)*0.05;
                break;
            case 4:
            case 5:
                var6=var3+(i-400000)*0.03;
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                var6=var4+(i-600000)*0.015;
                break;
            default:
                var6=var5+(i-1000000)*0.01;
                break;
        }
        cout<<"var6="<<var6<<endl;
        cin.get();
    }
    {
;
        int i,j,k;
        for(int n=100;n<1000;++n){
            i=n/100;
            j=n/10%10;
            k=n%10;
            if(n==i*i*i+j*j*j+k*k*k){
                cout<<n<<endl;
            }
        }
    }
    {

        int a,b;
        cin>>a>>b;
        cout<<"func: "<<func(a,b)<<endl;
        cout<<"lcm: "<<a*b/func(a, b)<<endl;
    }
    {

        int h,d;
        cin>>h>>d;
        for(int i = 0;i<h;++i){
            for(int k=0;k<i;++k){
                cout<<" ";
            }
            for(int j = 0;j<d;++j){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
        for(int i = 0;i<h;++i){
            for(int k=i+1;k<h;++k){
                cout<<" ";
            }
            for(int j = 0;j<d;++j){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}