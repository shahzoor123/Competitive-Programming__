#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int left = 0, right = 0;

        for (int i = 0; i < m; ++i) {
            if ((right - left) % 2 == 0 && left - 1 >= l) {
                left--;
            } else if (right + 1 <= r) {
                right++;
            } else if (left - 1 >= l) {
                left--;
            }
        }

        cout << left << " " << right << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
