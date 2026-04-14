#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    cout << "Grid size: " << n << "x" << n << ", Number of chips: " << k << endl;

    if (k == 0) {
        cout << "No chips to place. Answer: 0" << endl;
        return;
    }

    // The total number of diagonals is 2*n - 1
    // Diagonal 1 has 1 cell, Diagonal 2 has 2 cells, ..., Diagonal n has n cells.
    // After diagonal n, the diagonals will start decreasing back down to 1 cell.

    // First, create an array to store the number of cells in each diagonal
    vector<int> diagonals(2 * n - 1, 0);

    // Fill in the diagonal capacities
    for (int i = 0; i < n; i++) {
        diagonals[i] = i + 1;  // Diagonal i (1-based) has i+1 cells
    }
    for (int i = n; i < 2 * n - 1; i++) {
        diagonals[i] = 2 * n - i - 1;  // Diagonals after the middle decrease in size
    }

    cout << "Diagonal cell capacities: ";
    for (int i = 0; i < 2 * n - 1; i++) {
        cout << diagonals[i] << " ";
    }
    cout << endl;

    // Sort diagonals in descending order to place chips in the largest diagonals first
    sort(diagonals.rbegin(), diagonals.rend());

    cout << "Sorted diagonal capacities (descending): ";
    for (int i = 0; i < 2 * n - 1; i++) {
        cout << diagonals[i] << " ";
    }
    cout << endl;

    int occupiedDiagonals = 0;

    // Place chips in the diagonals
    for (int i = 0; i < 2 * n - 1 && k > 0; i++) {
        // Place as many chips as possible on this diagonal
        int chipsToPlace = min(k, diagonals[i]);
        k -= chipsToPlace;
        occupiedDiagonals++;

        cout << "Placing " << chipsToPlace << " chips on diagonal " << i + 1 
             << " (remaining chips: " << k << ")" << endl;
    }

    // Output the minimum number of occupied diagonals
    cout << "Minimum number of occupied diagonals: " << occupiedDiagonals << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
