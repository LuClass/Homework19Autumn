

#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    char a[1001],str[1001];
    cin>>a;
    strcpy( str,a );
    int head=0, tail=strlen(str)-1;
	for(; head<tail; head++, tail--)
	{
		swap(str[head], str[tail]);
	}
	if(a==str)cout<<"YES";
	cout<<"NO";
    return 0;
}


