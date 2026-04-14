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
    for (int i = 0; i < n; i++) cin >> a[i];

    // prefix sums for fast segment sum
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i - 1];

    long long answer = 0;

    // Try every k that divides n
    for (int k = 1; k <= n; k++) {
        if (n % k != 0) continue;

        long long mn = LLONG_MAX;
        long long mx = LLONG_MIN;

        // number of trucks = n / k
        for (int start = 0; start < n; start += k) {
            long long sumTruck =
                pref[start + k] - pref[start]; 
            mn = min(mn, sumTruck);
            mx = max(mx, sumTruck);
        }

        answer = max(answer, mx - mn);
    }

    cout << answer << "\n";


    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}