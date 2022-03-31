#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";


unordered_map<ll,vector<ll>>row;
unordered_map<ll,vector<ll>>col;
ll n,m;

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    ll arr[n][m];

    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++){
            row[arr[i][j]].push_back(i);
        }
    }

    for (ll i=0;i<m;i++){
        for (ll j=0;j<n;j++){
            col[arr[j][i]].push_back(i);
        }
    }

    ll counter=0;

    for (auto x: row){
        for (ll i=0;i<x.second.size();i++){
            counter+=((2*i+1-x.second.size())*x.second[i]);
        }
    }

    for (auto x: col){
        for (ll i=0;i<x.second.size();i++){
            counter+=((2*i+1-x.second.size())*x.second[i]);
        }
    }

    cout << counter << endl;

    return 0;
}


