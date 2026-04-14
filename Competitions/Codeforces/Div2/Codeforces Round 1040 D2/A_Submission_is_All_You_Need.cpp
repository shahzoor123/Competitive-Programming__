#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int score = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x >= 1) {
            score += x;
        } else {
            score += 1;
        }
    }

    cout << score << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
