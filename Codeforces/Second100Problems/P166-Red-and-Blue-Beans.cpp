#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        long long r, b, d;
        cin >> r >> b >> d;

        if (min(r, b) * (d + 1) >= max(r, b)) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
