#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    long long x;
    cin >> n >> k >> x;

    vector<int> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    if (total_sum * k < x) {
        cout << 0 << '\n';
        return;
    }

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    long long res = 0;
    for (int l = 1; l <= n; ++l) {
        long long first_seg = prefix[n] - prefix[l - 1];
        if (first_seg >= x) {
            res += k;
            continue;
        }

        long long remaining = x - first_seg;
        if (remaining <= 0) {
            res += k;
            continue;
        }

        if (total_sum <= 0) {
            continue;
        }

        long long full_a_needed = (remaining + total_sum - 1) / total_sum;
        if (full_a_needed >= k) {
            continue;
        }

        res += (k - full_a_needed);
    }

    cout << res << '\n';
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