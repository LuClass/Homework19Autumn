#include <bits/stdc++.h>
using namespace std;

int getrev(char a[]){
    int l=strlen(a),sum=0;
    for(int i=1;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(a[i]>a[j])sum++;
        }
    }
return sum;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int MAX;
    char a[1001];
    cin>>MAX;
    map<int,string>mp;
    for(int i=0;i<MAX;i++){
        cin>>a;
        mp.insert(make_pair(getrev(a),a));
        //getrev(a);m.insert( make_pair(key, value) );
    }
     map<int, string>::iterator  iter;
    for (iter = mp.begin(); iter != mp.end(); iter++){
        cout << iter->first << "  " << iter->second << endl;
    }

    return 0;
}


