#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX
#define endl "\n"
const long long mod = 1000000007;

void solve(){
    ll n,x;
    cin >> n;
    ll arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    ll suffix[2*n+1];
    for (int i=0;i<=2*n;i++){
        suffix[i]=LLONG_MAX;
    }

    for (int i=0;i<n;i++){
        cin >> x;
        suffix[x]=i;
    }
    for (int i=2*n-1;i>=0;i--){
        suffix[i]=min(suffix[i],suffix[i+1]);
    }
    ll ans=LLONG_MAX;
    for (int i=0;i<n;i++){
        ans = min(ans,i+suffix[arr[i]+1]);
    }
    cout << ans << endl;


}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}


