#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/

void solve() {
    ll n, x1,x2,k;
    cin >> n >> x1 >> x2 >> k;

    if(n <= 3){
        cout << 1 << endl;
        return;
    }

    ll d1 = abs(x2-x1); 
    ll d2 = n - d1;

    ll ans = min(d1,d2) + k;

    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}