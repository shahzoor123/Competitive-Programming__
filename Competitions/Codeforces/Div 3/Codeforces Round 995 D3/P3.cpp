#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q, k;
    cin >> n >> q >> k;

    vector<int> v(q);
    unordered_map<int, int> selected;

    for (int i = 0; i < q; ++i) 
        cin >> v[i];

    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        selected[x] = 1;
    }

    for (const auto &e : v) {
        if (k < n - 1)
            cout << 0;
        else if (k == n)
            cout << 1;
        else
            cout << !selected[e];
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
