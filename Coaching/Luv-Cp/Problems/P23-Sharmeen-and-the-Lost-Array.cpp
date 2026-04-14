#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T > 0) {
        int n; // Size of the lost array
        cin >> n;

        vector<string> X(n - 1); // Clues array
        for (int i = 0; i < n - 1; i++) {
            cin >> X[i];
        }

        vector<int> A(n, 1); // Initialize the result array with 1s

        for (int i = n - 2; i >= 0; i--) {
            if (X[i] == "0") {
                A[i] = A[i + 1]; // Same as next
            } 
            else if (X[i] == "1") {
                A[i] = 1; // Start with 1
                if (A[i + 1] == 1) {
                    int l = i + 1;
                    A[l] += 1; // Increment the next element
                    while (l < n - 1) {
                        if (X[l] == "0") {
                            A[l + 1] += 1; // Ensure next is greater
                        } 
                        else if (X[l] == "1" && A[l + 1] <= A[l]) {
                            A[l + 1] += 1; // Ensure next is greater than current
                        } 
                        else {
                            break; // Exit if no condition is satisfied
                        }
                        l++;
                    }
                }
            } else {
                A[i] = A[i + 1] + 1; // Next should be less
            }
        }

        // Print the result
        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }
        cout << endl;

        T--; // Decrement the test case counter
    }

    return 0;
}
