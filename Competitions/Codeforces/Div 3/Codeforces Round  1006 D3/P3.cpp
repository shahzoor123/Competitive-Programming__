#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    // Case 1: n = 1, just output x
    if (n == 1) {
        cout << x << endl;
        return;
    }
    
    vector<int> a(n);
    
    // Fill most elements with sequential values 0, 1, 2, ..., n-2
    for (int i = 0; i < n-1; i++) {
        a[i] = i;
    }
    
    // Last element will ensure the overall OR equals x
    a[n-1] = x;
    
    // Output the array
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i < n-1 ? " " : "\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}