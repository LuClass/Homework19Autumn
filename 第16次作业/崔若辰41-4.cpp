#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

struct cc{
    int ll=1;
    char *s;
};

bool isSame(char *t1,char *t2){
    if(t1==t2){
        return true;
    }
    int l = strlen(t1);
    for(int i=0;i<l;++i){
        if(t1[i]!=t2[i])
		    return false;
    }
    return true;
}

bool cmp(cc t1,cc t2){
    return t1.ll>t2.ll;
}

int main(){
    int n;
    cin>>n;
    cin.get();
    cc *a = new cc [n];
    for(int i=0;i<n;++i){
        char b;
        char *s = 0;
        while(cin.get(b)){
            if( b=='\0' || b=='\n'){
                break;
			}
            char *c;
            if(!s){
                c = new char [2];
                c[0] = b;
                c[1] = '\0';
            }
			else{
                int l= strlen(s);
                c =new char [l+2];
                strcpy(c,s);
                c[l] = b; 
			    c[l+1] = '\0';
            }
            delete [] s;
            s = c;
        }
        a[i].s = s;
    }
    for(int i=0;i<n;++i){
        if(!a[i].ll){
            continue;
        }
        for(int j=i+1;j<n;++j){
            if(isSame(a[i].s,a[j].s)){
                ++a[i].ll;
                a[j].ll = 0;
            }
        }
    }
    sort(a, a+n, cmp);
    for (int i=0;a[i].ll;++i){
        cout<<a[i].s<<" ";
    }
    for(int i=0;i<n;++i){
        delete [] a[i].s;
    }
    delete [] a;
    return 0;
}








