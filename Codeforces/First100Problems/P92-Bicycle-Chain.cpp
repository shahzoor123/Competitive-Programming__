#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int max_ratio = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (b[j] % a[i] == 0) {
                int ratio = b[j] / a[i];
                if (ratio > max_ratio) {
                    max_ratio = ratio;
                    count = 1;
                } else if (ratio == max_ratio) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

int main() {
    solve();
    return 0;
}
