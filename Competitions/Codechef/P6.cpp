#include <bits/stdc++.h>
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;

    
    int min_count = min(X, Y);
    int max_count = max(X, Y);

    // Calculate the minimum number of transitions
    int result = 2 * min_count + (max_count - min_count);

    cout << result << endl;
    
}

int main() {

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
