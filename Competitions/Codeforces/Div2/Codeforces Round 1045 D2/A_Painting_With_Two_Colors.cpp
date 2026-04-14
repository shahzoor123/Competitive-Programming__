#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        bool ok = false;
        if ((n % 2) == (b % 2)) {
            if (a <= b) ok = true;
            else if ((a % 2) == (n % 2)) ok = true;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
