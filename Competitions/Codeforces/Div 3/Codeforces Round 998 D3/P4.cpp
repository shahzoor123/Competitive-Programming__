#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool possible = true;
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] > a[i + 1]) {
                int diff = a[i] - a[i + 1];
                a[i] -= diff;
                a[i + 1] -= diff;

                if (a[i] < 0 || a[i + 1] < 0) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;


    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
