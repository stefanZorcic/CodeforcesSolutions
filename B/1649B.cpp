#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int solve(){
    ll n;
    cin >> n;
    ll a=0,s=0,x;
    for (int i=0;i<n;i++){
        cin >> x;
        s+=x;
        a=max(a,x);
    }

    if (a==0 && s==0){
        cout << 0 << endl;
        return 0;
    }

    if (2*a<=s){
        cout << 1 << endl;
        return 0;
    }

    cout << 2*a-s << endl;

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

