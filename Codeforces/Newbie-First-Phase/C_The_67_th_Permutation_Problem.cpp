#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(3 * n);
    int small = 1, large = 3 * n;
    
    for (int i = 0; i < n; i++) {
        p[3 * i] = small++;
        p[3 * i + 1] = large--;
        p[3 * i + 2] = large--;
    }
    
    for (int i = 0; i < 3 * n; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}