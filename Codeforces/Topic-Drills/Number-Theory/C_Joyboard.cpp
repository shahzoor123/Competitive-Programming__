#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, k;
    cin >> n >> m >> k;

    if (k == 1) {
        cout << 1 << "\n";
        return;
    }

    if (k == 2) {
        if (m <= n) {
            cout << m << "\n";
        } else {
            cout << n + (m - n) / n << "\n";
        }
        return;
    }

    if (k == 3) {
        if (m <= n) {
            cout << 0 << "\n";
        } else {
            cout << m - n - (m - n) / n << "\n";
        }
        return;
    }
    
    cout << 0 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
