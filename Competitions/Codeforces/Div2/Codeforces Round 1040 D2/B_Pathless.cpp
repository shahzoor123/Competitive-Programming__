#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    
    int total = 0;
    int cnt[3] = {0,0,0};
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        total += x;
        cnt[x]++;
    }

    if (total > s || s - total == 1) {
        while(cnt[0]--) cout << "0 ";
        while(cnt[2]--) cout << "2 ";
        while(cnt[1]--) cout << "1 ";
        cout << endl;
    }

    else cout << "-1" << endl;
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
