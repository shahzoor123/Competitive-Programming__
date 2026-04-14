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
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    int count = max(abs(a-c),abs(b-d));

    cout << count * count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}