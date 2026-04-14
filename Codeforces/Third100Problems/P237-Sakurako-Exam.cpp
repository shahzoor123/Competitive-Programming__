#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0) {
        cout << "YES" << endl;
        return;
    }

    if (a == 1 && b == 0) {
        cout << "NO" << endl;
        return;
    }

    if (a == 0) {
        if (b % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    if (b == 0) {
        if (a % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    if ((a + 2 * b) % 2 == 0) {
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