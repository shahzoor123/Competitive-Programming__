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

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (long long x = 2; x <= 100; ++x) {
        for (int i = 0; i < n; ++i) {
            if (__gcd(a[i], x) == 1) {
                cout << x << "\n";
                return;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}