#include <iostream>
using namespace std;

// Solve function implementing your approach
void solve() {
    // Step 1: Read inputs for the test case
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;

    // Step 2: Initialize variables for time tracking and movement direction
    int time = 0;      // Track time
    int dr = 1, dc = 1; // Movement direction (down-right)

    // Step 3: Simulate the robot's movement
    while (true) {
        // Check if the robot's row or column aligns with the dirty cell
        if (rb == rd || cb == cd) {
            cout << time << endl; // Print the time taken to clean the dirty cell
            return;
        }

        // Reflect direction if the robot hits a wall
        if (rb + dr > n || rb + dr < 1) dr = -dr; // Horizontal wall
        if (cb + dc > m || cb + dc < 1) dc = -dc; // Vertical wall

        // Move the robot to the next position
        rb += dr;
        cb += dc;

        // Increment time after each movement
        time++;
    }
}

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        solve(); // Call the solve function for each test case
    }

    return 0;
}
