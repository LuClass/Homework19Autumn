#include <bits/stdc++.h>
using namespace std;
char a[10001];
int getWordCount(){
    int l=strlen(a),sum=0,pos=0;
    while(pos<l){
        if(a[pos]==' '){sum++;while(a[pos]==' ')pos++;}
        pos++;
    }
return sum;
}

int main(){

    ///get in the char you need

return 0;
}
