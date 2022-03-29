#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl "\n";

int solve(){
    ll r,c;
    cin >> r >> c;
    char arr[r][c];
    ll counter=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin >> arr[i][j];
            if (arr[i][j]=='1'){
                counter++;
            }
        }
    }
    if (arr[0][0]=='1'){
        return 1;
    }
    cout << counter << endl;
    for (int i=(r-1);i>0;i--){
        for (int j=0;j<c;j++){
            if (arr[i][j]=='1') {
                cout << i << " " << j + 1 << " " << i + 1 << " " << j + 1 
<< endl;
            }
        }
    }

    for (int j=(c-1);j>0;j--){
        if (arr[0][j]=='1'){
            cout << 1 << " " << j << " " << 1 << " " << j+1 << endl;
        }
    }


    return 0;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll q;
    cin >> q;
    while (q--){
        if (solve()){
            cout << -1 << endl;
        }
    }

    return 0;
}


