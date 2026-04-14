#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int aOnesOdd = 0, aOnesEven = 0;
    int bZerosOdd = 0, bZerosEven = 0;

    for (int i = 0; i < n; i++) {
        // Count 1s in string 'a'
        if (a[i] == '1') {
            if ((i + 1) % 2 == 0) aOnesEven++;
            else aOnesOdd++;
        }

        // Count 0s in string 'b'
        if (b[i] == '0') {
            if ((i + 1) % 2 == 0) bZerosEven++;
            else bZerosOdd++;
        }
    }

    // cout << bZerosEven << aOnesOdd << bZerosOdd << aOnesEven << endl;
    
    if (bZerosEven >= aOnesOdd && bZerosOdd >= aOnesEven)
        cout << "YES\n";
    else
        cout << "NO\n";
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
