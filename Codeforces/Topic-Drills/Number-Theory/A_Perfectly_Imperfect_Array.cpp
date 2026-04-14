#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/


bool isPerfectSquare(int x) {
    int r = sqrt(x);
    return r * r == x;
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    bool ok = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!isPerfectSquare(a[i])) ok = true;
    }
    cout << (ok ? "YES" : "NO") << "\n";

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}