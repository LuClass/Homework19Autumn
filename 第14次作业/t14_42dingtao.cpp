#include<iostream>
using namespace std;
int main(){
    char ch[55];
    cin.get(ch,55);
    cout<<ch<<endl;
    for(int i=0;ch[i]!='\x00';i++){
        if(ch[i]>='A'&&ch[i]<='Z')
            ch[i]+=32;
    }
    cout<<ch<<endl;
    system("pause");
    return 0;
}