#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int l = a[0], r = a[0]; 

    for (int i = 1; i < n; i++) {
        if (a[i] < l - 1 || a[i] > r + 1) { 
            cout << "NO" << endl;
            return;
        }
        // Expand the occupied range
        l = min(l, a[i]);
        r = max(r, a[i]);
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
