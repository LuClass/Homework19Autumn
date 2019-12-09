#include <bits/stdc++.h>
using namespace std;
vector <string>a;
int main()
{
    int n;
    string tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
