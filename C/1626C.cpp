#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

ll f(ll dist){
    return ((dist*(dist+1))/2);
}

ll g(ll cur, ll dist){
    return (dist*cur+((dist*(dist+1))/2));
}

void solve(){
    ll n;
    cin >> n;
    ll dist[n];
    ll vals[n];
    pair<ll,ll> data[n];
    for(int i=0;i<n;i++){
        cin >> dist[i];
    }
    for (int i=0;i<n;i++){
        cin >> vals[i];
    }
    for (int i=0;i<n;i++){
        data[i]={dist[i]-vals[i]+1,dist[i]};
    }
    sort(data,data+n);

    ll y=0;
    vector<pair<ll,ll>>final;
    for (int i=0;i<n;i++){
        if (data[i].first>y){
            final.push_back(data[i]);
            y=data[i].second;
        } else if (data[i].second>y){
            final[final.size()-1].second=data[i].second;
            y=data[i].second;
        }
    }
    ll counter=0;
    for (int i=0;i<final.size();i++){
        counter+=f(final[i].second-final[i].first+1);
    }
    cout << counter << endl;

}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll q,a,b,c;
    cin >> q;
    while (q--){
        solve();
    }

    return 0;
}

