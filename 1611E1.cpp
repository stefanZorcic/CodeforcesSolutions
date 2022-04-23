#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll counter=0;
void solve() {
    ll n,k,a,b;
    cin >> n >> k;

    unordered_set<ll> f;
    unordered_map<ll,unordered_set<ll>>tree;
    vector<ll> arr(n+1,0);
    for (int i=0;i<k;i++){
        cin >> a;
        f.insert(a);
    }

    for (int i=0;i<n-1;i++){
        cin >> a >> b;
        assert(a!=b);
        tree[a].insert(b);
        tree[b].insert(a);
        arr[a]++;
        arr[b]++;
    }
    unordered_set<ll> l;
    for (int i=2;i<=n;i++){
        if (arr[i]==1){
            l.insert(i);
        }
    }

    ll ans=false;

    deque<ll> q;
    unordered_set<ll> vi;

    for (auto r : l){
        if (f.find(r)==f.end()){
            q.clear();
            vi.clear();
            q.push_back(r);
            while (!q.empty()){
                ll temp = q.size();
                bool tempAns=false;
                bool reset = false;
                for (int i=0;i<temp;i++){
                    ll node = q.front();
                    q.pop_front();
                    for (auto x : tree[node]){
                        if (vi.find(x)==vi.end()){
                            vi.insert(x);
                            q.push_back(x);
                            if (x==1){
                                tempAns=true;
                            }
                            if (f.find(x)!=f.end()){
                                tempAns=false;
                                reset=true;
                            }
                        }
                    }
                }
                if (tempAns&&!reset){
                    ans=true;
                    goto dog;
                }
                if (reset){
                    q.clear();
                }
            }
        }
    }
dog:
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    ll q;
    cin >> q;

    while (q--) {
        solve();
    }
}

