#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

void solve(){
    ll n;
    cin >> n;
    unordered_set<string>vals;
    string x;
    bool kill=false;
    for (int i=0;i<n;i++){
        cin >> x;
        vals.insert(x);
        if ((x.length()==1)&&(!kill)){
            cout << "YES" << endl;
            kill=true;
        }
        else if ((x.length()==2)&&(x.at(0)==x.at(1))&&(!kill)){
            cout << "YES" << endl;
            kill=true;
        }
        else if ((x.length()==3)&&(x.at(0)==x.at(2))&&(!kill)){
            cout << "YES" << endl;
            kill=true;
        }
        else {
            if (x.length()==2) {
                if (vals.find(x.substr(1,1)+x.substr(0,1))!=vals.end()){
                    if (!kill){
                        cout << "YES" << endl;
                        kill=true;
                    }
                }
                for (int i=0;i<26;i++){
                    if 
(vals.find(x.substr(1,1)+x.substr(0,1)+(char)((int)'a'+i))!=vals.end()){
                        if (!kill){
                            cout << "YES" << endl;
                            kill=true;
                        }
                    }
                }

            }
            else if (x.length()==3){
                if 
(vals.find(x.substr(2,1)+x.substr(1,1)+x.substr(0,1))!=vals.end()){
                    if (!kill){
                        cout << "YES" << endl;
                        kill=true;
                    }
                }
                else if 
(vals.find(x.substr(2,1)+x.substr(1,1))!=vals.end()){
                    if (!kill){
                        cout << "YES" << endl;
                        kill=true;
                    }
                }
            }
        }
    }
    if (!kill){
        cout << "NO" << endl;
    }
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
