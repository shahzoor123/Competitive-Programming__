#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    if (s.size() % 2 != 0) {
        cout << "NO\n";
        return;
    }

    int n = s.size();
    string first = s.substr(0, n / 2);
    string second = s.substr(n / 2, n / 2);

    if (first == second) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
