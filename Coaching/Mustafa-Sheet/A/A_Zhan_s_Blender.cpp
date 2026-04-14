#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long rate = min(x, y);
        long long ans = (n + rate - 1) / rate; 
        cout << ans << "\n";
    }
}
