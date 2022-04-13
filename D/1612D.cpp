#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

bool solve(ll a, ll b, ll x) {
    if (a == x || b == x) return true;
    if (a < b) swap(a, b);
    if (b > a - b) b = a - b;
    if (x > max(a, b) || a == 0 || b == 0) return false;
    ll cnt = max(1ll, (a - max(x, b)) / (2 * b));
    return solve(a - b * cnt, b, x);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll q,a,b,c;
    cin >> q;
    while (q--){
        cin >> a >> b >> c;
        if (solve(a,b,c)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}

