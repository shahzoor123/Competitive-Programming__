#include <iostream>
using namespace std;

void solve() {
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;


    x = max(0LL, x - a);
    y = max(0LL, y - b);

    if (x + y <= c) {
        cout << "YES" << endl;
        return;
    }
    else {
        cout << "NO" << endl;
        return;
    }


}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
