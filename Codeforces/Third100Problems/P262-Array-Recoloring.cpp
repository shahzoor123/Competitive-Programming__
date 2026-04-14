#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 lll;
const int maxn=1e9+7;
ll t,n,a[5555],k;

void solve() {
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    ll maxCost=0;

    if(k==1){
        for(int i=2;i<n;i++){
            maxCost=max(maxCost,a[i]+a[1]);
            maxCost=max(maxCost,a[i]+a[n]);
        }
        maxCost=max(maxCost,a[1]+a[n]);
    }
    else{
        sort(a+1,a+n+1);
        for(int i=n;i>=n-k;i--){
                maxCost+=a[i];
            }
        }
    cout<<maxCost<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
