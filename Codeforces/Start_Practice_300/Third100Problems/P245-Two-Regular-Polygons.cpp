#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    if(n % m == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
