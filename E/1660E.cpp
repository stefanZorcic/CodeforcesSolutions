#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

void solve(){
    ll n;
    cin >> n;
    ll arr [n][n];
    ll counter=0;
    ll ans=LLONG_MAX;
    char x;
    ll val;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> x;
            if (x=='0') val=0;
            else val=1;
            arr[i][j]=val;
            counter+=val;
        }
    }
    for (int count=0;count<n;count++) {
        ll temp = 0;
        for (int i = 0; i < n; i++) {
            temp += arr[(i+count)%n][i];
        }
        ans = min(ans, (counter - temp) + (n - temp));
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll q;
    cin >> q;
    while (q--){
        solve();
    }

    return 0;
}
