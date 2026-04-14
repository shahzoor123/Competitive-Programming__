#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;  // Number of test cases
    cin >> t;
    vector<int> results;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;
        if (remainder == 0) {
            results.push_back(0);  // No moves needed
        } else {
            results.push_back(b - remainder);  // Minimum moves to make a divisible by b
        }
    }

    // Output all results
    for (int result : results) {
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
