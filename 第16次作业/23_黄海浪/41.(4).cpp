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
//这把全当练手一下
//判断两字符串是否一样 地址-空串-长度-字符
bool isSame(char *t1,char *t2){
    if(t1==t2){
        return true;
    }
    if(!t1){
        if(!t2) return true;
        return false;
    }
    if(!t2){
        return false;
    }
    if(strlen(t1)!=strlen(t2)){
        return false;
    }
    unsigned long len = strlen(t1);
    for(int i=0;i<len;++i){
        if(t1[i]!=t2[i]) return false;
    }
    return true;
}
//结构体
struct charstr{
    unsigned int times=1;
    char *str;
};
bool cmp(charstr t1,charstr t2){
    return t1.times>t2.times;
}
int main(){
    int n;
    cin>>n;
    cin.get();
    charstr *strs = new charstr [n];
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
        strs[i].str = str;
    }
    for(int i=0;i<n;++i){
        if(!strs[i].times){
            continue;
        }
        for(int j=i+1;j<n;++j){
            if(isSame(strs[i].str,strs[j].str)){
                ++strs[i].times;
                strs[j].times = 0;
            }
        }
    }
    sort(strs, strs+n, cmp);
    for (int i=0;strs[i].times;++i){
        cout<<strs[i].str<<" ";
    }
    //释放内存
    for(int i=0;i<n;++i){
        delete [] strs[i].str;
    }
    delete [] strs;
    return 0;
}
