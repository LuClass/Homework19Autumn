#include <bits/stdc++.h>
using namespace std;



void getset(int rs[],int a[],int n){
    sort(a,a+n);
    int now=0,sum=0;
    rs[0]=a[0];
    map<int,int>mp;
    while(now<n){
        sum=1;
        while(a[now]==a[now+1] && now<n){
            now++;
            sum++;
        }
        mp.insert(make_pair(a[now],sum));
        now++;
    }
    map<int, int>::iterator  iter;
    for (iter = mp.begin(); iter != mp.end(); iter++){
        cout << iter->first << "  " << iter->second << endl;
    }
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n,a[10001],rs[10001];
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    getset(rs,a,n);

    return 0;
}


