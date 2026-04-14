#include <bits/stdc++.h>
using namespace std;

bool isValidGrid(const vector<vector<char>>& grid, int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'R') {
                if (i + 1 < n && grid[i + 1][j] == 'R') return false;
                if (j + 1 < m && grid[i][j + 1] == 'R') return false;
            } else if (grid[i][j] == 'W') {
                if (i + 1 < n && grid[i + 1][j] == 'W') return false;
                if (j + 1 < m && grid[i][j + 1] == 'W') return false;
            }
        }
    }
    return true;
}



// Function to simulate the grid filling process
bool simulateGrid(vector<vector<char>>& grid, int n, int m) {
    
    vector<vector<char>> grid1 = grid, grid2 = grid;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid1[i][j] == '.') {
                grid1[i][j] = ((i + j) % 2 == 0) ? 'R' : 'W';
            }

      
        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid2[i][j] == '.') {
                grid2[i][j] = ((i + j) % 2 == 0) ? 'W' : 'R';
            }
        }
    }

    // Check if either grid1 or grid2 is valid
    if (isValidGrid(grid1, n, m)) {
        grid = grid1;
        return true;
    } else if (isValidGrid(grid2, n, m)) {
        grid = grid2;
        return true;
    }

    return false;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> grid(n, vector<char>(m));


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }


        if (simulateGrid(grid, n, m)) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << grid[i][j];
                }
                cout << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
