#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char str[]){
    int count=0;
    for(int i=0;i<strlen(str);i++)
        if(str[i]>='str'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            count++;
    return count;
}
int main(){
    char ch[1024];
    cin.getline(ch,1024);
    cout<<getWordCount(ch);
    system("pause");
    return 0;
}