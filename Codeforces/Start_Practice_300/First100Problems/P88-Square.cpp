#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if ((a1 == a2 && b1 + b2 == a1) ||  
        (a1 == b2 && b1 + a2 == a1) ||  
        (b1 == a2 && a1 + b2 == b1) ||  
        (b1 == b2 && a1 + a2 == b1)) {  
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
