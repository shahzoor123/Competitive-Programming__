#include <iostream>
#include <cmath>  // For ceil function
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    // Check if the sum k is achievable within the range
    if (k < -n * p || k > n * p) {
        cout << -1 << endl;
        return;
    }

    // Minimum operations required
    int min_operations = ceil(abs(k) / (double)p);
    cout << min_operations << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
