#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    s += s;

    
    int ans = 0;
    int lastG = -1;

    for (int i = 2 * n; i >= 0; --i) {
        if (s[i] == 'g') {
            lastG = i;
        }
        if(i < n && s[i] == c && lastG != -1){
            ans = max(ans, lastG - i);
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
