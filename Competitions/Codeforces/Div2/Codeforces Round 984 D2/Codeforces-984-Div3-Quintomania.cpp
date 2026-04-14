#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n]; // Declare the array with size n

        // Input the array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool allYes = true; // Flag to track if all differences are valid

        // Calculate differences and check for the conditions
        for (int i = 1; i < n; i++) { // Start from index 1
            int diff = arr[i] - arr[i - 1]; // Calculate the difference
            
            // Check if the difference is either 5 or 7 (or their negatives)
            if (!(diff == 5 || diff == 7 || diff == -5 || diff == -7)) { 
                allYes = false; // If any difference is not valid, set flag to false
                break; // No need to check further
            }
        }

        // Output YES or NO based on the flag
        if (allYes && n > 1) { // Ensure there are at least 2 elements to compare
            cout << "YES" << endl; // All differences are valid
        } else {
            cout << "NO" << endl; // At least one difference is invalid
        }
    }
}
