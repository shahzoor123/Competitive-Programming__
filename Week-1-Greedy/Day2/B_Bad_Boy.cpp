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
    ll n, m, i, j;
    cin >> n >> m >> i >> j;
    
    ll x1 = i + n - i;
    ll y1 = j + m - j;
    // cout << x1 << " " << y1 << endl;

    ll x2 = x1 - x1+1;
    ll y2 = y1 - y1+1;
    // cout << x2 << " " << y2 << endl;


    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}