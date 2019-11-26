#include <bits/stdc++.h>
using namespace std;
const int maxn=100001;
int prime[maxn];
int visit[maxn];
void Prime(){
    memset(prime,0,sizeof(prime));
    memset(visit,0,sizeof(visit));
    for (int i = 2;i <= maxn; i++) {
        //cout<<" i = "<<i<<endl;
        if (!visit[i]) {
            prime[++prime[0]] = i;      //纪录素数， 这个prime[0] 相当于 cnt，用来计数
        }
        for (int j = 1; j <=prime[0] && i*prime[j] <= maxn; j++) {
            visit[i*prime[j]] = 1;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
}

int exe(int m){
    int sum=0;
    while(m>0){
        sum+=m%10;
        m/=10;
    }
return sum;
}


bool isSmith(int num){
    int pos=0,sum1=0,sum2=0;
    sum1=exe(num);
    int n = num;
    for(int i=2;i<=n;i++)
    while(n!=i){
      if(n%i==0){
        sum2+=exe(i);
        n=n/i;
      }
      else break;
    }
    sum2+=exe(n);
    //cout<<sum1<<" "<<sum2<<endl;
    if(sum1==sum2)return true;
return false;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n;
    cin>>n;
    cout<<isSmith(n)<<endl;
    for(int i=439974;;i++){
        if(isSmith(i)==1){
            cout<<i<<endl;
            return 0;
        }

    }

    return 0;
}


