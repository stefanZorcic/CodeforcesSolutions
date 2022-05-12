#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX
#define endl "\n"
const long long mod = 1000000007;

struct BIT{
    const static ll MN = 2e5+5;
    ll arr[MN];

    void build(ll n){
        for (int i=0;i<MN;i++){
            arr[i]=0;
        }
    }

    ll sum(ll idx){
        ll counter=0;
        while (idx>0){
            counter += arr[idx];
            idx ^= (idx & -idx);
        }
        return counter;
    }

    void update(ll idx, ll val){
        while (idx <= MN+1){
            arr[idx]=(arr[idx]+val);
            idx += (idx & -idx);
        }
    }
};

void solve(){
    ll n, counter=0,x;
    cin >> n;

    BIT bit;
    bit.build(n+3);

    for (int i=0;i<n;i++){
        cin >> x;
        counter+=bit.sum(x);
        bit.update(1,1);
        bit.update(x+1,-1);
    }
    cout << counter << endl;
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


