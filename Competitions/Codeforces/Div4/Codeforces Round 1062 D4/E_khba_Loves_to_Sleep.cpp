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

void solve() {
    int n, k;
    long long x;
    cin >> n >> k >> x;
    vector<long long> a(n);
    for (auto &v : a) cin >> v;
    sort(a.begin(), a.end());
    
    if (k >= n) {
        for (int i = 0; i < k; i++) {
            if (i < n) cout << a[i] << " ";
            else cout << min(x, a.back() + (i - n + 1)) << " ";
        }
    } else {
        vector<long long> teleports;
        for (int i = 0; i < k; i++) {
            int start = i * n / k;
            int end = (i + 1) * n / k - 1;
            long long mid = (a[start] + a[end]) / 2;
            teleports.push_back(mid);
        }
        for (auto t : teleports) cout << t << " ";
    }
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