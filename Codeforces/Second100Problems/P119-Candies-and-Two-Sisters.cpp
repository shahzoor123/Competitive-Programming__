#include <iostream>
using namespace std;

void solve() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        long long n;  // Number of candies
        cin >> n;

        // Calculate the number of ways
        cout << max(0LL, (n - 1) / 2) << endl;
    }
}

int main() {
    solve();
    return 0;
}
