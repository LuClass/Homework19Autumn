#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;
/*
 *黄海浪 9181040G0818
 *2019.11.26
 *第 17 次作业
 */

void lowStr(char *p){
    while(*p){
        if(*p<='Z'&&*p>='A') *p -= 'A'-'a';
        ++p;
    }
}

bool cmp(char *t1,char *t2){
    unsigned long len1 = strlen(t1);
    unsigned long len2 = strlen(t2);
    unsigned long len = len1<len2?len1:len2;
    for(int i = 0;i<len;++i){
        if(t1[i] != t2[i]) return t1[i]<t2[i];
    }
    return len1<len2;
}

int main(){
    {//T1
        char str[] = "qwaAAAwqe";
        lowStr(str);
        cout<<str<<endl;
    }
    
    {//T2
        int n;
        cin>>n;
        cin.get();
        char ** strs = new char * [n];//n个字符串
        for(int i=0;i<n;++i){
            char tmp;
            char *str = nullptr;
            while(cin.get(tmp)){
                if( tmp=='\0' || tmp=='\n'){
                    break;
                }
                char *data;
                if(!str){
                    data = new char [2];
                    data[0] = tmp;
                    data[1] = '\0';
                }else{
                    unsigned long len = strlen(str);
                    data =new char [len+2];
                    strcpy(data,str);
                    data[len] = tmp;
                    data[len+1] = '\0';
                }
                //删去old空间
                delete [] str;
                str = data;
            }
            strs[i] = str;
        }
        sort(strs,strs+n, cmp);
        cout<<endl;
        for(int i=0;i<n;++i){
            cout<<strs[i]<<" ";
            delete [] strs[i];
        }
        delete [] strs;
    }
    
    return 0;
}
