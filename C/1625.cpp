#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

ll dp[501][501];
ll dist[501];
ll arr[501];


int main() {
   // cin.tie(0);
    //cout.tie(0);
    ios::sync_with_stdio(0);

    for (int i=0;i<501;i++){
        for (int j=0;j<501;j++){
            dp[i][j]=INT_MAX;
        }
    }

    ll n,m,k;
    cin >> n >> m >> k;

    for (int i=0;i<n;i++){
        cin >> dist[i];
    }
    dist[n]=m;


    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    for (int i=0;i<=k;i++){
        dp[0][i]=0;
    }

    for (int i=1;i<=n;i++){
        for (int z=0;z<i;z++){
            for (int j=0;j<=k;j++) {
                if (j+i-z-1<=k) {
                    dp[i][j] = min(dp[i][j], dp[z][j + i - z - 1] + 
(dist[i] - dist[z]) * arr[z]);
                }
            }
        }
    }

    ll ans=LLONG_MAX;
    for (int i=0;i<=k;i++){
        ans=min(ans,dp[n][i]);
    }

    cout << ans << endl;

    return 0;
}
