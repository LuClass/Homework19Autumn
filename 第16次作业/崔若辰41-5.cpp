#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

bool Shuzi(char c){
    if(c<='9'&&c>='0')
	    return true;
    return false;
}

int main(){
    string a;
    getline(cin, a);
    int l= a.length();
    int *c = new int [1000];
    int m = 0;
    for(int i=0;i<l;++i){
        if(Shuzi(a[i])){
            if(i<1||!Shuzi(a[i-1])){
                c[m++] = a[i]-'0';
            }
        }
    }
    for(int i=0;i<=m;++i){
        cout<<c[i]<<" ";
    }
    delete []c;
    return 0;
}
