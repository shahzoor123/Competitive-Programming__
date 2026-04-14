#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int k;  // Total number of elements in the shuffled array
        cin >> k;

        // We don't actually need the array of shuffled numbers.
        // We can just skip reading it.
        for (int i = 0; i < k; i++) {
            int temp;
            cin >> temp;  // Just read and discard each element
        }

        // Find divisors of k
        bool found = false;
        for (int i = 1; i <= sqrt(k); i++) {
            if (k % i == 0) {
                // i is a divisor, and k / i is also a divisor
                int n = i;
                int m = k / i;

                // We output the first pair we find where both n and m are greater than 1
                if (n != 1 && m != 1) {
                    cout << n << " " << m << endl;
                    found = true;
                    break;  // We only need to output one valid pair
                }
            }
        }

        // If no valid pair was found other than (1, k), we output (1, k)
        if (!found) {
            cout << 1 << " " << k << endl;
        }
    }

    return 0;
}
