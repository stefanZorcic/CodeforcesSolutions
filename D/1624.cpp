#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

void solve(){
    ll n,k;
    cin >> n >> k;
    string a;
    cin >> a;
    unordered_set<char>vals;
    ll pairs=0,odd=0;
    for (int i=0;i<n;i++){
        if (vals.find(a.at(i))==vals.end()){
            vals.insert(a.at(i));
            odd++;
        }
        else{
            pairs++;
            vals.erase(vals.find(a.at(i)));
            odd--;
        }
    }

    ll ans= 2*(pairs/k);
    odd += 2*(pairs%k);
    if (odd>=k){
        ans++;
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

