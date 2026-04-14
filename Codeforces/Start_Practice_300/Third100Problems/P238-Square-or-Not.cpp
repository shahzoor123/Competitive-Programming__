#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int k = sqrt(n);
    if (k * k != n) {
        cout << "NO" << endl;
        return;
    }

    // Check first row all '1's
    for (int i = 0; i < k; ++i) {
        if (s[i] != '1') {
            cout << "NO" << endl;
            return;
        }
    }

    // Check last row all '1's
    for (int i = n - k; i < n; ++i) {
        if (s[i] != '1') {
            cout << "NO" << endl;
            return;
        }
    }

    // Check intermediate rows
    for (int i = 1; i < k - 1; ++i) {
        int row_start = i * k;
        if (s[row_start] != '1' || s[row_start + k - 1] != '1') {
            cout << "NO" << endl;
            return;
        }
        for (int j = row_start + 1; j < row_start + k - 1; ++j) {
            if (s[j] != '0') {
                cout << "NO" << endl;
                return;
            }
        }
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