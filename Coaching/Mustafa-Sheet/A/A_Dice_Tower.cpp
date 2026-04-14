#include <bits/stdc++.h>
using namespace std;

int opposite(int x) {
    return 7 - x;
}

void solve() {
    int n, top;
    cin >> n >> top;
    int bottom = opposite(top);

    bool invalid = false;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a == top || b == top || a == bottom || b == bottom || a == b || opposite(a) == b) {
            invalid = true;
        }
    }

    cout << (invalid ? "NO" : "YES") << endl;
}

int main() {
    solve();
    return 0;
}
