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
    ll n, a, b;
    cin >> n >> a >> b;

    ll cost = 0;

    ll remainder = n % 3;

    ll groups = (n - remainder) / 3;

    ll groupCost = min(groups * 3 * a, groups * b);

    cost += groupCost;

    ll sigleSub = min(remainder * a, b);

    cost += sigleSub;

    cout << cost << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}