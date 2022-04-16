#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;


bool check(ll e, ll o, ll even, ll odd){
    ll teven = even-e;
    e-=even;
    ll todd = odd-o;
    o-=odd;
    if (todd>0){
        e-=floor(todd/2);
    }
    return ((e<=0)&&(o<=0));
}

ll a (ll e, ll o, ll x){
    ll l=0, r=1e18;
    while (l<=r){
        ll mid  = (l+r)>>1;
        //cout << mid << endl;
        ll even1 = floor(mid/2); ll odd1= mid-even1;
        ll even2 = floor((mid+1)/2); ll odd2= (mid+1)-even2;
        //cout << check(e,o,even1,odd1) <<  " " << check(e,o,even2,odd2) 
<< endl;
        if (!check(e,o,even1,odd1)&&check(e,o,even2,odd2)){
            return (mid+1);
        }
        else if (check(e,o,even1,odd1)&&check(e,o,even2,odd2)){
            r=mid;
        }
        else{
            l=mid;
        }
    }

}

void solve(){
    ll n;
    cin >> n;
    ll large=LLONG_MAX;
    vector<ll> arr(n);
    ll x=0;
    ll e=0,o=0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        x = max(x,arr[i]);
    }
    bool remove=false;
    for (int i=0;i<n;i++) {
        if ((arr[i] % 2 == 1) ^ (x % 2 == 1)) {
            arr[i] += 1;
            o++;
            remove=true;
        }
        e += ((x - arr[i]) / 2);
        if (remove){
            arr[i]-=1;
            remove=false;
        }
    }

    if ((e==0)&&(o==0)){
        cout << 0 << endl;
        return;
    }
    else {
        large = min(large,a(e,o,x));
    }

    e=0,o=0;
    x+=1;
    for (int i=0;i<n;i++) {
        if ((arr[i] % 2 == 1) ^ (x % 2 == 1)) {
            arr[i] += 1;
            o++;
        }
        e += ((x - arr[i]) / 2);
    }

    if ((e==0)&&(o==0)){
        cout << 0 << endl;
        return;
    }
    else {
        large = min(large,a(e,o,x));
    }

    cout << large << endl;
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

