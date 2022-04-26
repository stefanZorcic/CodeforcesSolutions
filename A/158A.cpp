#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    ll n,m, counter=0;
    cin >> n >> m;
    ll arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]>=arr[m-1]){
            counter += (arr[i]>0);
        }
    }
    cout << counter << endl;
}
