#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX
#define endl "\n"
const long long mod = 1000000007;

struct DSU{
    const static ll MN = 1e6 + 5; ll dsu[MN];
    void build(ll n){ for (ll i=0;i<=n;i++){ dsu[i]=-1;}}
    ll find(ll a){return dsu[a] < 0 ? a : dsu[a] = find(dsu[a]);}
    void u(ll a, ll b){
        a = find(a), b = find(b);
        if(a == b) return;
        if(a > b) {
            swap(a, b);
        }
        dsu[a] += dsu[b]; dsu[b] = a;}
    ll size(ll a){ return -dsu[find(a)];}
};

void solve(){
    ll n,m; DSU arr;
    cin >> n >> m;
    arr.build(26);
    string x;
    cin >> x;
    for (int i=0;i<n;i++){
        ll val = x.at(i)-'a';
        val = arr.find(val);
        while (m>0&&val>0){
            arr.u(val,val-1);
            m--;
            val=arr.find(val);
        }
    }

    for (int i=0;i<n;i++){
        cout << char('a'+arr.find(x.at(i)-'a'));
    }
    cout << endl;
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

