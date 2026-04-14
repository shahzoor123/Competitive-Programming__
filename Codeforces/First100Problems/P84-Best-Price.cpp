#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    vector<pair<int, int>> ev;

    for (int i = 0; i < n; ++i) {
      ev.emplace_back(a[i], 1);
      ev.emplace_back(b[i], 2);
    }

    sort(ev.begin(), ev.end());

    long long ans = 0;
    int cnt = n, bad = 0;

    for (int i = 0; i < 2 * n;) {
      int x = ev[i].first, y = ev[i].second;
      if (bad <= k) ans = max(ans, x * 1LL * cnt);
      while (i < 2 * n && ev[i].first == x) {
        bad += (ev[i].second == 1);
        bad -= (ev[i].second == 2);
        cnt -= (ev[i].second == 2);
        ++i;
      }
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
