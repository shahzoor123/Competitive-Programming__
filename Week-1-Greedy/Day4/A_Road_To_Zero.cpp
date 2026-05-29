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
    ll x, y;
    cin >> x >> y;
    ll a, b;
    cin >> a >> b;


    ll diff = max(x,y) - min(x,y);

    ll total = a * diff;

    ll op1 = min(x,y) * a * 2; 
    ll op2 = min(x,y) * b;

    cout << min(total + op1, total + op2) << endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}