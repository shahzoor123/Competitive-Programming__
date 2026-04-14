#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size(), ans = n - 1;

    for (int i=0,rem = 0;i<n;i++){

        if (s[i] != '0'){
            ans = min(ans, rem + n - i - 1);
            rem++;
        }

    }
 
    
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
