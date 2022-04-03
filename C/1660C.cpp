#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";


void solve(){
    string y;
    cin >> y;
    ll counter=0;
    vector<bool>vals(26,false);
    for (auto x : y){
        if (vals[x-'a']){
            counter+=2;
            for (int i=0;i<26;i++){
                vals[i]=false;
            }
        }
        else{
            vals[x-'a'] =true;
        }
    }
    cout << y.length()-counter << endl;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

   ll q;
   cin >> q;
   while(q--){
       solve();
   }

    return 0;
}
