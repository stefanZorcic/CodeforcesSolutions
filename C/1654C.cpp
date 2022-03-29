#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

bool solve(){
    ll n,sum=0,m;
    cin >> n;
    priority_queue<ll>a,b;

    for (int i=0;i<n;i++){
        cin >>m;
        sum+=m;
        a.push(m);
    }
    b.push(sum);

    while (!b.empty()){
        if (b.top()<a.top()) {
            return 0;
        }
        if (b.top()==a.top()){
            b.pop();
            a.pop();
        }
        if (b.top()!=a.top())
        {
            b.push(ceil(b.top()/2.0));
            b.push(floor(b.top()/2.0));
            b.pop();
        }
    }

    return 1;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll q;
    cin >> q;
    while (q--){
        cout<< (solve()?"YES\n":"NO\n");
    }

    return 0;
}


