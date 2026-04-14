#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int count100 = 0, count200 = 0;
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        if (w == 100) {
            count100++;
        } else {
            count200++;
        }
    }

    int totalWeight = 100 * count100 + 200 * count200;
    if (totalWeight % 200 != 0) {
        cout << "NO" << endl;
        return;
    }

    int halfWeight = totalWeight / 2;

    // Try to use as many 200-gram apples as possible
    int max200 = min(count200, halfWeight / 200);
    int remainingWeight = halfWeight - 200 * max200;

    // Check if the remaining weight can be covered by 100-gram apples
    if (remainingWeight <= 100 * count100 && remainingWeight % 100 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}