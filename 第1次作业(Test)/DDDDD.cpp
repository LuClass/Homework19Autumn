#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 1050;
const int MOD = 105225319;
int N, L[mx], R[mx];
int dp[mx][mx], G[mx][mx];
vector<int> B[mx];
int find(int id, int x) {
    for (int i = 0; i < B[id].size(); i++)
        if (B[id][i] == x) return i;
    return -1;
}
bool exe1 () {
    memset(G, 0, sizeof(G));
    for (int i = 1; i < N; i++) {
        int n = B[i].size(), m = B[i+1].size();
        if (n > 10) return false;

        for (int j = 0; j < m; j++) {
            int mv = find(i, B[i+1][j]);
            for (int s = 0; s < (1<<n); s++) {
                if (mv == -1 || (s&(1<<mv)))
                    G[i][s] |= (1<<j);
            }
        }

    }
    for (int i = 1; i <= N; i++) {
        int n = B[i].size();
        for (int s = 0; s < (1<<n); s++) {
            int c = 0;
            for (int j = 0; j < n; j++) {
                int v = B[i][j];
                if (s&(1<<j) && R[v] == i) c++;
            }
            G[i][s] = (c ? -1 : G[i][s]);
        }
    }
    return B[N].size() <= 10;;
}
int exe2 (int k) {
    if (!exe1()) return 0;
    memset(dp,0,sizeof(dp));
    dp[1][(1<<B[1].size())-1] = 1;
    for (int i=1;i<=N;i++) {
        int n=B[i].size();
        for (int s=0;s<(1<<n);s++) {
            if (dp[i][s]==0) continue;
            for (int j=0;j<n;j++) if (s&(1<<j)) {
                int v=G[i][s^(1<<j)];
                if (v!=-1)
                    dp[i+1][v]=(dp[i+1][v]+dp[i][s]) % MOD;
            }
            int u=G[i][s];
            if (u!=-1)
                dp[i+1][u]=(dp[i+1][u]+dp[i][s]) % MOD;
    //      printf("%d ", dp[i][s]);
        }
    //  printf("\n");
    }
    int ans=dp[N+1][0];
    for (int i=1;i<=k;i++)
        ans=(1LL*ans*i)%MOD;
    return ans;
}

int main(){
    int t;
    scanf("%d", &t);
    for (int kcas=1;kcas<=t;kcas++) {
        scanf("%d",&N);
        for (int i=1;i<=N;i++) scanf("%d", &L[i]);
        for (int i=1;i<=N;i++) scanf("%d", &R[i]);
        int cnt=0;
        for (int i=1;i<=N;i++) B[i].clear();
        for (int i=1;i<=N;i++) if (R[i] - L[i] + 1 != N) {
            for (int j=L[i];j<=R[i];j++) B[j].push_back(i);
            cnt++;
        }
        printf("Case #%d: %d\n", kcas, exe2(N - cnt));
    }
    return 0;
}
