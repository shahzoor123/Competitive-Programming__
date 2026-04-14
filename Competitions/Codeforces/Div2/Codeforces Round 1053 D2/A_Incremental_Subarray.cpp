#include <bits/stdc++.h>
using namespace std;

bool isSortedAscending(const vector<int>& a) {
    for (int i = 1; i < (int)a.size(); i++) {
        if (a[i] <= a[i - 1]) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> target(m);
    for (int i = 0; i < m; i++) cin >> target[i];

    if (m == 1 && target[0] == 1) {
        cout << n << "\n";
        return;
    }

    if (isSortedAscending(target)) {
        cout << n - target.back() + 1 << "\n";
        return;
    }

   
    cout << 1 << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
