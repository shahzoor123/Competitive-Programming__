#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int R = 0, C = 0;
    for (int x : a) {
        if (x <= h) R++;
        if (x <= l) C++;
    }
    
    int answer = min(max(R,C)/2,min(R,C));

    cout << answer << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
