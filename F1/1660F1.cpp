#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define inf LLONG_MAX;

void solve(){
    ll n;
    cin >> n;
    ll prefix[n+1];
    prefix[0]=0;
    char x;
    for (int i=1;i<=n;i++){
        cin >> x;
        if (x=='-'){
            prefix[i]=prefix[i-1]-1;
        }
        else{
            prefix[i]=prefix[i-1]+1;
        }
    }
    ll counter=0;
    for (int i=0;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            if (((prefix[j]-prefix[i])%3==0)&&((prefix[j]-prefix[i])<=0)){
                counter++;
            }
        }
    }
    cout << counter << endl;
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


