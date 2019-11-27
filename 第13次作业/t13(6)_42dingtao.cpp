#include<iostream>
#include<string>
#include<string.h>
#define MAX 3
using namespace std;

int getRev(char ch[]){
    int sum=0;
    for(int i=0;i<strlen(ch);i++){
        for(int j=i+1;j<strlen(ch);j++){
            if(ch[i]>ch[j])
                sum++;
        }
    }
    return sum;
}
bool sort(int rev,int index,int arr[][2]){
        for(int i=0;i<MAX;i++){
            if(arr[i][1]<rev){
                arr[i][0]=index;
                arr[i][1]=rev;
                return true;
            }
        }
        return false;
}
int main(){
    char str[MAX][20];
    int index_rev[MAX][2];
    memset(index_rev,-1,sizeof(index_rev));
    int t=MAX;
    while(t--){
        cin>>str[t];
        sort(getRev(str[t]),t,index_rev);
    }
    for(int i=0;i<MAX&&index_rev[i][0]!=-1;i++){
        cout<<str[index_rev[i][0]]<<"  "<<index_rev[i][1]<<endl;
    }
    system("pause");
    return 0;
}

