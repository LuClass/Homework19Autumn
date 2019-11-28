#include <bits/stdc++.h>
using namespace std;

int execution(char *a[]){
    int l=strlen(*a);
    for(int i=0;i<l;i++)
        if(*a[i]>='A' && *a[i]<='Z')printf("%c",*a[i]-'A'+'a');
        else printf("%d",*a[i]);
}


int main(int argc,char** argv[]){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    //int n;
    execution(*argv);

    return 0;
}


