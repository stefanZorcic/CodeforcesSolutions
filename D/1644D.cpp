#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

void solve(){
    ll a,b,k,q;
    cin >> a >> b >> k >> q;
    vector<pair<ll,ll>>vals;
    ll x,y;
    for (int i=0;i<q;i++){
        cin >> x >> y;
        vals.push_back({x,y});
    }
    ll ans=1;
    unordered_set<ll>cols,rows;
    for (int i=(q-1);i>=0;i--){
        bool temp=false;
        if (rows.find(vals[i].first)==rows.end()){
            temp=true;
            rows.insert(vals[i].first);
        }
        if (cols.find(vals[i].second)==cols.end()){
            temp=true;
            cols.insert(vals[i].second);
        }
        if (temp){
            ans*=k;
            ans%=998244353;
        }
        if ((cols.size()==b)||(rows.size()==a)){
            break;
        }

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

