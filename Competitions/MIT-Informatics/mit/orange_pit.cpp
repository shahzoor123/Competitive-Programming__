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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

     sort(a.begin(), a.end());
    
    long long mn = a[0], mx = a[n-1];
    long long ans = mx - mn;
    for (int i = 1; i < n-1; i++)
        {ans += max(a[i] - mn, mx - a[i]);}
    

    cout << ans << endl;
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}