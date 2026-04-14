#include<bits/stdc++.h>
using namespace std;

string solve() {
    int n = 3;
    vector<string> grid(3); 


    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    // Check horizontal lines for winner
    for (int i = 0; i < n; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != '.') {
            return string(1, grid[i][0]);  
        }
    }

    // Check vertical lines for winner
    for (int i = 0; i < n; i++) {
        if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[0][i] != '.') {
            return string(1, grid[0][i]); 
        }
    }

    // Check diagonals for winner
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != '.') {
        return string(1, grid[0][0]); 
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != '.') {
        return string(1, grid[0][2]); 
    }

    return "DRAW"; 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string result = solve();
        cout << result << endl;
    }

    return 0;
}
