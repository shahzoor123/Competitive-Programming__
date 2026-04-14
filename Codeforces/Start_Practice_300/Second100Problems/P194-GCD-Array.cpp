#include <iostream>
using namespace std;
void solve() {
    int t;cin >> t;
    while (t--) {
        long long l, r, k;cin >> l >> r >> k;
        if (l == r) {
            cout << (l > 1 ? "YES\n" : "NO\n");
            continue;
        }
        long long odd=(r-l+ 1)-((r/2)-((l- 1)/2));
        if(odd <= k)cout << "YES\n";
        else cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}