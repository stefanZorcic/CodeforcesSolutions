#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll b[n]; ll a[n];
    ll sumb=0;
    for (int i=0;i<n;i++){
        cin >> b[i];
        sumb+=b[i];
    }
    if (0!=(sumb % ((n*(n+1))/2))){
        cout << "NO" << endl;
        return;
    }
    sumb /= ((n*(n+1))/2);

    a[0] = ((sumb + b[n-1] - b[0])/(n));
    if ((0!=(((sumb + b[n-1] - b[0]))%(n)))||(a[0]<=0)){
        cout << "NO" << endl;
        return;
    }


    for (int i=1;i<n;i++){
        a[i] = ((sumb + b[i-1] - b[i])/(n));
        if ((0!=(((sumb + b[i-1] - b[i]))%(n)))||(a[i]<=0)){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    //cin.tie(0);
    //cout.tie(0);
    ios_base::sync_with_stdio(false);


    ll q;
    cin >> q;
    while (q--) {
        solve();
    }
}
