#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int teams = 0;

    while(n >= 1 && m >= 1 && (n + m) >= 3){
        if (n > m) {
            // Prefer using (2 XP, 1 NB)
            n -= 2;
            m -= 1;
        } else {
            // Prefer using (1 XP, 2 NB)
            n -= 1;
            m -= 2;
        }
        teams++;
    }

    cout << teams << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
