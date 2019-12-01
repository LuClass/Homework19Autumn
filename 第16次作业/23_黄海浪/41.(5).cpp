#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;
/*
*黄海浪 9181040G0818
*2019.11.25
*第 16 次作业
*/
bool isAlp(char p){
    if(p<='9'&&p>='0') return true;
    return false;
}
int main(){
    string str;
    getline(cin, str);
    unsigned long len = str.length();
    int *p = new int [len/2+5];
    unsigned long index = -1;
    for(int i=0;i<len;++i){
        if(isAlp(str[i])){
            if(i<1||!isAlp(str[i-1])){
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
