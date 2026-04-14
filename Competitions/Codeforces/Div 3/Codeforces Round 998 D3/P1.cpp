#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int maximumFibonacciness = 0;

 
    for (int a3 = min({a1, a2, a4}) - 100; a3 <= max({a1, a2, a4}) + 100; ++a3) {
        
        int count = 0;
        if (a1 + a2 == a3) count++;
        if (a2 + a3 == a4) count++;
        if (a3 + a4 == a5) count++;
        maximumFibonacciness = max(maximumFibonacciness, count);
    }

    cout << maximumFibonacciness << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
