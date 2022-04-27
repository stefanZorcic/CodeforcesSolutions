#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX

void solve(){
    ll n;
    cin >> n;
    ll a[n]; ll b[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        cin >> b[i];
    }
    multiset<ll>vals;

    ll counterA=(n-1);
    ll counterB=counterA;
    ll prevA=-999; ll prevB=-999;
    while (counterA>=0){
        if (counterB<0) {
            counterB = 0;
        }

        while ((counterB>0)&&(b[counterB]==b[counterB-1])){
            vals.insert(b[counterB]);
            counterB-=1;
        }

        if (a[counterA]==b[counterB]){
            counterA--;
            counterB--;
        }
        else{
            if (vals.find(a[counterA])!=vals.end()){
                //counterB--;
                vals.erase(vals.find(a[counterA]));
                counterA--;
            }
        }
        if ((counterA==prevA)&&(counterB==prevB)){
            cout << "NO" << endl;
            return;
        }
        prevA=counterA;
        prevB=counterB;
    }
    cout << "YES" << endl;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;

    while (t--){
        solve();
    }
}
