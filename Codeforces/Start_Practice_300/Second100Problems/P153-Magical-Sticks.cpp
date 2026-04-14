#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << n << endl;
        return;
    }

    if (n % 2 == 0) {
        cout << n / 2 << endl;
        return;
    }

    if (n % 2 != 0) {
        cout << (n / 2) + 1 << endl;
        return;
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
