#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void solve(){
    ll n,m;
    cin >> n;
    vector<ll>arr(n+1);
    vector<ll>ans(n+1,0);
    vector<ll>temp(n+1,0);
    for (int i=1;i<=n;i++){
        cin >> arr[i];
    }


    for (int i=n;i>=1;i--){


        ll ind;
        ll diff;
        for (int j=1;j<=n;j++){
            if (arr[j]==i){
                ind=j;
                diff = i-ind;
                break;
            }
        }


        ans[i]+=(ind%i);

        if (diff > 0) {
            for (int j = 1; j <= i; j++) {
                if ((j + diff) % i != 0) {
                    temp[(j + diff) % i] = arr[j];
                } else {
                    temp[(j + diff)] = arr[j];
                }
            }
            for (int j=1;j<=n;j++){
                arr[j]=temp[j];
            }
        }





    }

    for (int i=1;i<=n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll q;
    cin >> q;
    for (int i=0;i<q;i++){
        solve();
    }

    return 0;
}
/*
1
8
1 7 5 3 4 2 6 8

 */