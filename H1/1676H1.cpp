#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX
#define endl "\n"
const long long mod = 1000000007;


void solve(){
    ll n, counter=0;
    cin >> n;
    ll arr[n];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j]<=arr[i]){
                counter++;
            }
        }
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


