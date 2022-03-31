#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

ll vals[14]={1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 
39916800, 479001600, 6227020800, 87178291200};
ll k=2;

bool bit(ll val, ll k){
    return (val & (1 << (k-1)));
}

ll nums(ll n){
    ll count = 0;
    while (n > 0) {
        count = count + 1;
        n = n & (n - 1);
    }
    return count;
}

void solve(){
    ll n;
    cin >> n;

    ll temp=2; k=2;
    for (int i=3;i<15;i++){
        temp*=i;
        if (temp>n){
            break;
        }
        k=i;
    }
    ll ans=LLONG_MAX;

    for (int i=0;i<(pow(2,k)-1);i++){
        temp=n;
        ll counter=0;
        for (int j=0;j<k;j++){
            if (bit(i,j)) {
                temp -= vals[j];
                counter+=1;
            }
        }
        if (temp>=0) {
            counter += nums(temp);
            ans = min(ans, counter);
        }
    }

    cout << ans << endl;
    return;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll q;
    cin >> q;
    while (q--) {
        solve();
    }

    return 0;
}


