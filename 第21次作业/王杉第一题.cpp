#include<iostream>
#include<string.h>
#include<string>
using namespace std;
bool num(char p){
    if(p<='9'&&p>='0') return 1;
    return 0;
}
int main(){
    string str;
    getline(cin, str);
    int len = str.length();
    int *p = new int [len/2+`15];
    int index = -1;
    for(int i=0;i<len;++i){
        if(num(str[i])){
        if(i<1||!num(str[i-1])){
                p[++index] = str[i]-'0';
            }else{
                p[index] = p[index]*10+str[i]-'0';
            }
        }
    }
     for(int i = 0;i<=index;++i){
     cout<<p[i]<<" ";
    }
    delete []p;
    return 0;
}
