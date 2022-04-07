#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

ll val[1005];
ll temp[1005];
ll cost[1005];
ll dp[1005][12005];


void solve(){
    ll n,w,x;
    cin >> n >> w;
    w=min(w,12LL*n);

    for (int i=0;i<n;i++){
        cin >> x;
        cost[i]=temp[x];
    }
    for (int i=0;i<n;i++){
        cin >> val[i];
    }

    for (int i=0;i<1005;i++){
        for (int j=0;j<=w;j++){
            dp[i][j]=0LL;
        }
    }

    for (int j=0;j<=w;j++){
        if (j >= cost[0]){
            dp[0][j] = val[0];
        }
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<=w;j++){
            if (j >= cost[i]){
                dp[i][j] = max(dp[i - 1][j], dp[i-1][j - cost[i]] + 
val[i]);
            }
            else{
                if (j>0) {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], 0LL);
                }
            }
        }
    }


    ll ans=0;
    for (int i=0;i<1005;i++){
        for (int j=0;j<=w;j++){
            //cout << dp[i][j] << " ";
            ans = max(ans,dp[i][j]);
        }
        //cout << endl;
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    ll q;
    cin >> q;

    for (int i=1;i<1001;i++){
        temp[i]=inf;
    }
    temp[1]=0;
    for (int i=1;i<1001;i++){
        for (int x=1;x<=i;x++){
            if ((i+floor(i/x))<1005){
                
temp[(i+(ll)floor(i/x))]=min(temp[(i+(ll)floor(i/x))],temp[i]+1);
            }
        }
    }


    while (q--){
        solve();
    }

    return 0;
}

