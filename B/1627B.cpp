#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";


void solve(){
    ll n,m;
    cin >> n >> m;
    vector<ll>vals;
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++){
            vals.push_back(max(i-1,n-i)+max(j-1,m-j));
        }
    }
    sort(vals.begin(),vals.end());
    for (int i=0;i<n*m;i++){
        cout << vals[i] << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

   ll q;
   cin >> q;
   while(q--){
       solve();
   }

    return 0;
}
