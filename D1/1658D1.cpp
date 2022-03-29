#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";


ll bits(ll number)
{
    return ((ll)log2(number)+1);
}

ll val(ll n, ll k)
{
    return ((n & (1 << (k - 1))) >> (k - 1));
}


int solve(){
    ll a,b,m;
    cin >> a >> b;
    vector<ll>ones(18,0);
    vector<ll>zeros(18,0);


    for (int j=0;j<=b;j++){
        cin >> m;
        //cout << m << " " << bits(m) << endl;
        for (int i=0;i<18;i++){
            if (val(m,i+1)==1LL){
                ones[i]++;
            }
            if (val(m,i+1)==0LL) {
                zeros[i]++;
            }
        }
    }
    ll counter=0;
    for (int i=0;i<18;i++){
        //cout << i << " " << ones[i] << " " << zeros[i] << endl;
        if (ones[i]>zeros[i]){
            counter+=pow(2,i);
        }
    }
    cout << counter << endl;
    /*
     0 00
     1 01
     2 10
     3 11
     */

    return 0;
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


