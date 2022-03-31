#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

void solve(){
    stack<pair<ll,ll>>arr;
    stack<pair<ll,ll>>Ll;
    pair<ll,ll> val,temp;
    ll n,m;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> m;

        arr.push({m,m});

        ll prev=-1;
        while (true){
            if (arr.size()>1) {
                val = arr.top();
                arr.pop();
                temp = arr.top();
                arr.push(val);

                if (temp.second > arr.top().first) {
                    val = {min(temp.first, arr.top().first), 
max(temp.second, arr.top().second)};
                    arr.pop();
                    arr.pop();
                    arr.push(val);
                }
            }
            if (prev==arr.size()){
                break;
            }
            prev=arr.size();
        }
    }
    
    cout << arr.size() << endl;
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

