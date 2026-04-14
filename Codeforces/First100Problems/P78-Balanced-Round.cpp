#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;


    vector<long long> a(n+1);
    for (long long i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    

    sort(a.begin()+1,a.end());
    long long maxValidSubset = 1, currentSize = 1;


    for (int i = 2; i <= n; ++i) {
        if (a[i] - a[i - 1] <= k) {
            currentSize++;
        } else {
            maxValidSubset = max(maxValidSubset, currentSize);
            currentSize = 1;
        }
    }

    maxValidSubset = max(maxValidSubset, currentSize);
  
    cout << n - maxValidSubset << endl;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
