#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define inf LLONG_MAX
#define endl "\n"


void solve(){
    ll n,m;
    string a;
    cin >> m >> n;
    cin >> a;
    ll maxU=0,maxD=0;
    ll maxL=0,maxR=0;
    ll posX=0,posY=0;
    bool finalX=false, finalY=false;


    for (int i=0;i<a.size();i++){
        if ((a.at(i)=='U')&&(!finalY)) posY++;
        if ((a.at(i)=='D')&&(!finalY)) posY--;
        if ((a.at(i)=='R')&&(!finalX)) posX++;
        if ((a.at(i)=='L')&&(!finalX)) posX--;

        if (posY>maxU) maxU=posY;
        if (posY<maxD) maxD=posY;
        if (posX>maxR) maxR=posX;
        if (posX<maxL) maxL=posX;

        if (maxU+abs(maxD)+1==m){
            finalY=true;
        }
        if (maxR+abs(maxL)+1==n){
            finalX=true;
        }
    }

    cout << max(m+maxD,1LL) << " " << max(n-maxR,1LL)  << endl;


}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;
    while (t--){
        solve();
    }
    
    return 0;
}

