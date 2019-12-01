#include <iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    while((ch=getchar())!='\n'){
        if(ch>='A'&&ch<='Z')
           ch = ch + 32;
        putchar(ch);
    }    
    putchar('\n'); 
    return 0;
}

