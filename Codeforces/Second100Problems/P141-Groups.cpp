#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> schedule(n, vector<int>(5));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> schedule[i][j];
        }
    }

    if (n % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    int required = n / 2;

    for (int day1 = 0; day1 < 5; ++day1) {
        for (int day2 = day1 + 1; day2 < 5; ++day2) {
            int count1 = 0, count2 = 0, countBoth = 0;
            for (int i = 0; i < n; ++i) {
                if (schedule[i][day1] && schedule[i][day2]) {
                    countBoth++;
                } else if (schedule[i][day1]) {
                    count1++;
                } else if (schedule[i][day2]) {
                    count2++;
                }
            }
            if (count1 + countBoth >= required && count2 + countBoth >= required && count1 + count2 + countBoth == n) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}