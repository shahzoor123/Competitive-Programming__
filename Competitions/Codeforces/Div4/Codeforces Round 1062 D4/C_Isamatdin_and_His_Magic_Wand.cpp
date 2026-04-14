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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    bool hasEven = false, hasOdd = false;
    for (int x : a) {
        if (x % 2 == 0) hasEven = true;
        else hasOdd = true;
    }

    if (hasEven && hasOdd) {
        sort(a.begin(), a.end());
    }

    for (int x : a) cout << x << " ";
    cout << "\n";

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}