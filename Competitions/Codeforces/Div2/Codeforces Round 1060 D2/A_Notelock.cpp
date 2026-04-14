#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int minimumProtection = 0;
    int lastOne = -k;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
          
            if (i - lastOne >= k) {
                minimumProtection++;
            }
            lastOne = i;
        }
    }

    cout << minimumProtection << "\n";
}



int main() {
    int t;
    cin >> t;    
    while (t--) {
        solve();
    }

    return 0;
}
