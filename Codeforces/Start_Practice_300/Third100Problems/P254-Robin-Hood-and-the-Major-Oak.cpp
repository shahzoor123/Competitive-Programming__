#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long start = max(1LL, n - k + 1);
    long long end = n;

    long long totalLeaves = (end * (end + 1)) / 2 - (start * (start - 1)) / 2;

    if(totalLeaves %  2  == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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
