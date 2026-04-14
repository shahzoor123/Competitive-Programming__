#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_diff = 360;

    for (int start = 0; start < n; start++) {
        int sum = 0;
        // Iterate over all possible lengths of the sector
        for (int length = 0; length < n; length++) {
            int idx = (start + length) % n;
            sum += a[idx];
            int diff = abs(sum - (360 - sum));
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }

    cout << min_diff << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
