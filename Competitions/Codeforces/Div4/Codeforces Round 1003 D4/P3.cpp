#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int t, n, m, a[N], b[N];

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];

    sort(b + 1, b + m + 1);

    int p = min(a[1], b[1] - a[1]);

    cout << "Initial p: " << p << endl;

    for (int i = 2; i <= n; i++) {
        cout << "Processing a[" << i << "] = " << a[i] << " with p = " << p << endl;

        if (max(b[m] - a[i], a[i]) < p) {
            cout << "Failed at a[" << i << "], max transformation " << max(b[m] - a[i], a[i]) << " < " << p << endl;
            cout << "NO" << endl;
            return;
        }

        int pos = lower_bound(b + 1, b + m + 1, p + a[i]) - b;

        cout << "Lower bound found at position " << pos << ", value: " << (pos <= m ? b[pos] : -1) << endl;

        if (pos > m) {
            p = a[i];
            cout << "No valid transformation found, setting p = " << p << endl;
        } else if (a[i] >= p) {
            p = min(b[pos] - a[i], a[i]);
            cout << "Transforming a[" << i << "] = " << a[i] << ", new p = " << p << endl;
        } else {
            p = b[pos] - a[i];
            cout << "Setting new p = " << p << endl;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
