#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        cout << "\n--- New Test Case ---" << endl;
        cout << "p: " << p << ", s: " << s << endl;

        int n = p.size();
        int m = s.size();
        int i = 0, j = 0;
        bool possible = true;

        while (i < n && j < m) {
            if (p[i] != s[j]) {
                cout << "Mismatch at i=" << i << " and j=" << j << ": p[i]=" << p[i] << ", s[j]=" << s[j] << endl;
                possible = false;
                break;
            }
            char current = p[i];
            int cnt_p = 0;
            while (i < n && p[i] == current) {
                i++;
                cnt_p++;
            }
            int cnt_s = 0;
            while (j < m && s[j] == current) {
                j++;
                cnt_s++;
            }
            cout << "Character: " << current << ", Count in p: " << cnt_p << ", Count in s: " << cnt_s << endl;

            if (cnt_s < cnt_p || cnt_s > 2 * cnt_p) {
                cout << "Invalid ratio for character " << current << endl;
                possible = false;
                break;
            }
        }

        cout << "Final i: " << i << ", Final j: " << j << endl;
        if (possible && i == n && j == m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
