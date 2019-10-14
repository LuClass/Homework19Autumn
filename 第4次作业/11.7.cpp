#include<iostream>
using namespace std;

int main(){
    int a=3;
	int b=2;
	int c;
    cout<<1<<'\t'<<2<<endl;
    for(int i=2;i<=20;i++){
        cout<<a<<'\t'<<b<<endl;
        c=a+b;
        b=a;
        a=c;
    }
    return 0;
}
