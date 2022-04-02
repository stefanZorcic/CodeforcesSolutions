#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

ll n,k;

ll reverse(ll a, ll b){
    return a ^ (b-1);
}

void solve(){
    ll a,b;
    cin >> n >> k;
    if (k==0){
        for (int i=0;i<n/2;i++){
            cout << i << " " << reverse(i,n) << endl;
        }
    }
    if (k>0 && k<(n-1)){
        cout << k << " " << (n-1) << endl;
        cout << 0 << " " << reverse(k,n) << endl;
        for (int i=1;i<n/2;i++){
            if (!((i==k)||(i==reverse(k,n)))){
                cout << i << " " << reverse(i,n) << endl;
            }
        }
    }
    if (k==(n-1)){
        if (n==4){
            cout << -1 << endl;
        }
        else{
            cout << n-1 << " " << n-2 << endl;
            cout << n-3 << " " << 1 << endl;
            cout << 0 << " " << 2 << endl;
            for (int i=3;i<n/2;i++){
                cout << i << " " << reverse(i,n) << endl;
            }
        }
    }
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

