#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    set<string> valid;
    for (int i = 2; i <= 100; ++i) {
        valid.insert("10" + to_string(i));
    }

    if (valid.count(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
