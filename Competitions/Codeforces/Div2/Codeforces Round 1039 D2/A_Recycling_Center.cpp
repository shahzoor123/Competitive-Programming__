#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX = 1e6 + 5;
int a[MAX];

void solve() {
    int n, c;
    cin >> n >> c;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    int minimumCost = 0;

    for (int i = n; i >= 1; i--) {
        if (a[i] > c) {

            cout << a[i];
            minimumCost++;
        } else {
            for (int j = 1; j < i; j++) {
                a[j] *= 2;
            }
        }
    }

    cout << minimumCost << '\n';
}

int32_t main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
