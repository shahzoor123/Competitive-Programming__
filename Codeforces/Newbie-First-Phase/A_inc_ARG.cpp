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
    int n;
    cin >> n;

    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans++;
        if (s[i] != '1')
            break;
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}