#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    int d = abs(x - y); 

    if (d == k) {
        cout << 0 << endl;
        return;
    }

    int diff = abs(k - d);
    
  
    if (diff % 2 == 0 && k <= x + y) {
        cout << diff / 2 << endl;
    } else {
        cout << -1 << endl; 
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
