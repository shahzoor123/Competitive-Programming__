#include <bits/stdc++.h>
using namespace std;

// Function to perform the optimal sequence of operations
void solve() {
    int n, k;
    cin >> n >> k;

    // Initialize the count of operations
    int count = 0;

    // Perform the optimal sequence of operations: subtract (k - 1) each time
    while (n > 1) {
        n -= (k - 1); // Reduce n by (k - 1) each time
        count++; // Increment the operation count
    }

    // Output the total number of operations
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        solve(); // Solve each test case
    }

    return 0;
}
