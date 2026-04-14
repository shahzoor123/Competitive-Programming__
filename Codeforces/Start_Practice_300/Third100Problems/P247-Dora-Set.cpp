#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    int odd_count = 0;
    for (int i = l; i <= r; ++i) {
        if (i % 2 == 1) {
            odd_count++;
        }
    }

   
    cout << odd_count / 2 << endl;
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
