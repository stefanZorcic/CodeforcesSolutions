#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

ll bits(ll n){
    return (ll)log2(n)+1;
}

ll val(ll n, ll k){
    return (n>>k)&1;
}

void solve(){
    ll a,b;
    cin >> a >> b;
    ll ans=b-a;
    for (int i=a;i<b;i++){
        ll b1 = i|b;
        for (int j=(bits(b)-1);j>=0;j--){
            if((val(i,j)==1)&&(val(b,j)==0)){
                for (int z=j-1;z>=0;z--){
                    b1 ^= (-0 ^ b1) & (1UL << z);
                }
                break;
            }
        }
        ans = min(ans,i+(i|b1)+(1-a-b));
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

