#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;


void solve(){
    ll ans=0;
    ll n,a;
    cin >> n;
    vector<ll> vals(n+1,0);
    for (int i=0;i<(n-1);i++){
        cin >> a;
        vals[a]++;
    }
    vals[0]=1;
    sort(vals.rbegin(),vals.rend());
    while (!vals.empty() && vals.back() <= 0){ vals.pop_back();}

    for (int i=0;i<vals.size();i++){
        vals[i]-=vals.size()-i;
        ans++;
    }
    while (!vals.empty() && vals.back() <= 0){ vals.pop_back();}



    while (!vals.empty()){
        sort(vals.rbegin(),vals.rend());
        for (int i=0;i<vals.size();i++){
            vals[i]--;
        }
        vals[0]--;
        ans++;
        while (!vals.empty() && vals.back() <= 0) vals.pop_back();
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

