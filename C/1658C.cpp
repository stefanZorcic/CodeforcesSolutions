#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

void solve(){
    ll n;
    cin >> n;
    ll past,cur, first;
    cin >> past;
    first = past;
    bool kill=false;
    ll counter=0;
    if (past==1){
        counter++;
    }
    for (int i=1;i<n;i++){
        cin >> cur;
        if (cur==1){
            counter++;
        }
        if ((!kill)&&((cur-past)>1)){
            cout << "NO" << endl;
            kill=true;
        }
        past=cur;
    }
    if (kill){
        return;
    }
    if (((first-cur)>1)||(counter!=1)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
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
