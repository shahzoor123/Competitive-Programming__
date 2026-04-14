#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of all diagonals from a given cell
int calculateDiagonalSum(const vector<vector<int>>& matrix, int n, int m, int row, int col) {
    int sum = 0;

    // Bottom-right diagonal (↘️)
    int i = row, j = col;
    while (i < n && j < m) {
        sum += matrix[i][j];
        i++;
        j++;
    }

    // Bottom-left diagonal (↙️)
    i = row, j = col;
    while (i < n && j >= 0) {
        sum += matrix[i][j];
        i++;
        j--;
    }

    // Top-right diagonal (↗️)
    i = row, j = col;
    while (i >= 0 && j < m) {
        sum += matrix[i][j];
        i--;
        j++;
    }

    // Top-left diagonal (↖️)
    i = row, j = col;
    while (i >= 0 && j >= 0) {
        sum += matrix[i][j];
        i--;
        j--;
    }

    // Subtract the value at the starting cell 3 extra times
    // because it's added 4 times (once in each diagonal)
    sum -= 3 * matrix[row][col];

    return sum;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    // Input the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maximumSum = 0;

    // Iterate over each cell to calculate diagonal sums
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int diagonalSum = calculateDiagonalSum(matrix, n, m, i, j);
            maximumSum = max(maximumSum, diagonalSum);
        }
    }

    // Output the maximum sum of diagonals for the current test case
    cout << maximumSum << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
