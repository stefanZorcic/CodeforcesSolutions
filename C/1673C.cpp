#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX
#define endl "\n"
const long long mod = 1000000007;

vector<ll> m;

const int N = 40004, M = 502;
const long long MOD = 1000000007;
long long dp[N][M];


int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    m.push_back(0);
    for (ll i=1;i<=8*pow(10,4);i++){
        string temp = to_string(i);
        bool val=true;
        for (int j=0;j<(temp.size()/2);j++){
            if (temp[j]!=temp[temp.size()-j-1]){
                val&=false;
            }
        }
        if (val){
            m.push_back(i);
        }
    }

    for(int j=1;j<M;j++)
        dp[0][j]=1;
    for(int i=1;i<N;i++)
    {
        dp[i][0]=0;
        for(int j=1;j<M;j++)
        {
            if(m[j]<=i)
                dp[i][j]=(dp[i][j-1]+dp[i-m[j]][j])%MOD;
            else
                dp[i][j]=dp[i][j-1];
        }
    }

    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << dp[n][M-1] << endl;
    }

    return 0;
}


