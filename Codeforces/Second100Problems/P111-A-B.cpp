#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Input the two-digit integer
        int sum = (n / 10) + (n % 10); // Extract and sum the tens and units place
        cout << sum << endl; // Output the result
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
