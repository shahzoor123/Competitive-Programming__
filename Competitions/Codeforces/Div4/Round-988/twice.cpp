#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        bool used[n] = {false}; // Array to track used indices

        // Input the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int score = 0;

        // Nested loop to find pairs
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // Ensure i < j to avoid repetition
                if (!used[i] && !used[j] && arr[i] == arr[j]) {
                    score++;     // Found a valid pair
                    used[i] = true; // Mark indices as used
                    used[j] = true;
                    break;       // Stop after finding a pair for `i`
                }
            }
        }

        cout << score << endl; // Output score for this test case
    }

    return 0;
}
