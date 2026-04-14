#include<bits/stdc++.h>
using namespace std;
int t, n, a, o;

int main() {
    cin >> t; // Read the number of test cases
    while (t--) { // Loop through each test case
        int m = 0, p = 0; // Initialize variables to track the two largest counts
        cin >> n; // Read the number of candy types
        for (int i = 1; i <= n; i++) { // Loop through each candy type
            cin >> a; // Read the number of candies of the current type
            if (a > m) { // If the current count is greater than the maximum
                p = m; // Update the second maximum
                m = a; // Update the maximum
            } else if (a > p) { // If the current count is greater than the second maximum
                p = a; // Update the second maximum
            }
        }
        // Check if the difference between the two largest counts is greater than 1
        if (m - p > 1) {
            cout << "No" << endl; // If yes, print "No"
        } else {
            cout << "Yes" << endl; // Otherwise, print "Yes"
        }
    }
    return 0;
}