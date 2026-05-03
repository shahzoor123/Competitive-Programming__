#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    
    sort(a.begin(), a.end());
    
    long long totalCost = 0;
    
    int i = 0, j = n - 1;
    
    // Pair 1's with largest numbers
    while (i < j && a[i] == 1) {
        totalCost += a[j];  // 1 * a[j]
        i++;
        j--;
    }
    
    // Remaining elements (all >= 2) take singly
    for (int k = i; k <= j; k++) {
        totalCost += a[k];
    }
    
    cout << totalCost % MOD << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}