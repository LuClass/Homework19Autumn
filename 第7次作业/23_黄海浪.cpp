#include <iostream>
/*
 *黄海浪 9181040G0818
 *2019.10.24
 *第 7 次作业
 */

using namespace std;
int gcd(int a,int b){
    return a?gcd(b%a,a):b;
}

int main() {
    {
        //T2
        cout<<"//T2"<<endl;
        long long i;
        int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
        cin>>i;
        bonus1=100000*0.1;
        bonus2=bonus1+100000*0.75;
        bonus4=bonus2+200000*0.5;
        bonus6=bonus4+200000*0.3;
        bonus10=bonus6+400000*0.15;
        switch ((i-1)/100000) {
            case 0:
                bonus=i*0.1;
                break;
            case 1:
                bonus=bonus1+(i-100000)*0.075;
                break;
            case 2:
            case 3:
                bonus=bonus2+(i-200000)*0.05;
                break;
            case 4:
            case 5:
                bonus=bonus4+(i-400000)*0.03;
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                bonus=bonus6+(i-600000)*0.015;
                break;
            default:
                bonus=bonus10+(i-1000000)*0.01;
                break;
        }
        cout<<"bonus="<<bonus<<endl;
        cin.get();
    }
    {
        //T13
        cout<<"//T13"<<endl;
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
        //T16
        cout<<"//T16"<<endl;
        int a,b;
        cin>>a>>b;
        cout<<"gcd: "<<gcd(a,b)<<endl;
        cout<<"lcm: "<<a*b/gcd(a, b)<<endl;
    }
    {
        //T23
        cout<<"//T23"<<endl;
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
