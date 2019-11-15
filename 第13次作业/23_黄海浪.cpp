#include<iostream>
#include<string.h>
#include<algorithm>
/*
 *黄海浪 9181040G0818
 *2019.11.14
 *第 13 次作业
 */
#define MAX 100
using namespace std;

struct nxss{
    unsigned int times;
    char c[30];
}nxs[MAX];
int getRev(char a[]){
    int s=0;
    unsigned long len = strlen(a);
    for(int i=0;i<len;++i){
        for(int j=i+1;j<len;++j){
            if(a[i]-a[j]>0){
                ++s;
            }
        }
    }
    return s;
}
void getTimes(int n){
    for(int i=0;i<=n;++i){
        nxs[i].times = getRev(nxs[i].c);
    }
}
bool cmp(nxss &t1,nxss &t2){
    return t1.times<t2.times;
}

int getWordCount(char a[]){
    unsigned long len = strlen(a);
    int s=0;
    for(int i=1;i<len;++i){
        //isalpha也行
        if( ((!islower(a[i]))&&(!isupper(a[i]))) && (islower(a[i-1])||isupper(a[i-1])) ){
            ++s;
        }
    }
    if(islower(a[len-1])||isupper(a[len-1])){
        ++s;
    }
    return s;
}

int main(){
    {//(6)
        int n=0;
        while(cin.getline(nxs[n].c, 21)&&nxs[n].c[0]!='\0'&&n<MAX){
            ++n;
        }
        if(nxs[n].c[0]=='\0'){
            --n;
        }
        getTimes(n);
        sort(nxs,nxs+n+1,cmp);
        for(int i=0;i<=n;++i){
            cout<<nxs[i].c<<" "<<nxs[i].times<<endl;
        }
    }
    
    {//(8)
        char arr[1000];
        cin.getline(arr, 1000);
        cout<<getWordCount(arr)<<endl;
    }
    
    return 0;
}
