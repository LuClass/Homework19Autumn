#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

void Pai(char *c){
   while(*c){
        if(*c<='Z'&&*c>='A')
		    *c -= 'A'-'a';
        ++c;
    }
}

bool cmp(char *t1,char *t2){
    int l1 = strlen(t1);
    int l2 = strlen(t2);
    int l3 = l1<l2?l1:l2;
    for(int i = 0;i<l3;++i){
        if(t1[i] != t2[i])
		    return t1[i]<t2[i];
    }
    return l1<l2;
}

int main(){
    char a[] = "aeighPJAdt";
    Pai(a);
    cout<<a<<endl;
    int n;
    cin>>n;
    cin.get();
    char ** aa = new char * [n];//n¸ö×Ö·û´®
    for(int i=0;i<n;++i){
        char b;
        char *a = 0;
        while(cin.get(b)){
            if( b=='\0' || b=='\n'){
                break;
            }
            char *d;
            if(!a){
                d = new char [2];
                d[0] = b;
                d[1] = '\0';
            }
			else{
                int l4 = strlen(a);
                d =new char [l4+2];
                strcpy(d,a);
                d[l4] = b;
                d[l4+1] = '\0';
            }
            delete [] a;
            a = d;
        }
        aa[i] = a;
    }
    sort(aa,aa+n, cmp);
    cout<<endl;
    for(int i=0;i<n;++i){
        cout<<aa[i]<<" ";
        delete [] aa[i];
    }
    delete [] aa;
    return 0;
}





