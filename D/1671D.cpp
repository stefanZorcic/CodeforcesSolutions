#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX

void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    ll counter=0;

    for (int i = 1; i < n; i++) {
        counter += abs(arr[i]-arr[i-1]);
    }


    ll idx=0;
    ll m = abs(arr[0]-1);

    if (abs(arr[n-1]-1)<m){
        idx=n-1;
        m=abs(arr[n-1]-1);
    }
    for (int i=1;i<n;i++){
        ll val = abs(arr[i]-arr[i-1]);
        ll tval = abs(arr[i]-1)+abs(arr[i-1]-1);
        ll temp = abs(val-tval);
        if (temp<m){
            m = temp;
            idx=i;
        }
    }
    arr.insert(arr.begin()+idx,1);
    ll m2 = abs(arr[0]-x);

    if (abs(arr[n]-x)<m2){
        m2=abs(arr[n]-x);
    }
    for (int i=1;i<(n+1);i++){
        ll val = abs(arr[i]-arr[i-1]);
        ll tval = abs(arr[i]-x)+abs(arr[i-1]-x);
        ll temp = abs(val-tval);
        if (temp<m2){
            m2 = temp;
        }
    }

    cout << counter + m + m2 << endl;
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
