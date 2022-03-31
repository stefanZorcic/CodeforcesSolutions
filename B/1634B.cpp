#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

void solve(){
    ll n,x,y,m;
    cin >> n >>x >> y;
    ll counter=0;
    while (n--){
        cin >> m;
        counter+=m;
    }

    if ((counter+x+y)%2==0){
        cout << "Alice" << endl;
        return ;
    }
    cout << "Bob" << endl;

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


