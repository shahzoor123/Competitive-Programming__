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
    ll T, H,U;
    cin >> T >> H >> U;

    ll n = 0;

    // For T & U
    n += 3 * U + min(T,U);
    T -= min(T,U);

    //For H & T
    n += 3 * H + 2 * min(2*H,T);
    T -= min(2*H,T);

    //For T & T
    if(T){
        n += 2 * T + 1;
    }

    cout << n << endl; 

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}