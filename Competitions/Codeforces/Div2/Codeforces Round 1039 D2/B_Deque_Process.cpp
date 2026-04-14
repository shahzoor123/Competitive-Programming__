#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    deque<int> d;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        d.push_back(x);
    }

    bool smaller = true; 
    while (!d.empty()) {
        if (smaller) {
            if (d.front() < d.back()) {
                cout << 'L';
                d.pop_front();
            } else {
                cout << 'R';
                d.pop_back();
            }
        } else {
            if (d.front() > d.back()) {
                cout << 'L';
                d.pop_front();
            } else {
                cout << 'R';
                d.pop_back();
            }
        }

        smaller = !smaller; 
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
