#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findFourthCell(int n, int m, vector<string>& grid) {
    // Step 1: Find the coordinates of all the '*' cells
    vector<pair<int, int>> stars;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '*') {
                stars.push_back({i + 1, j + 1}); // Store 1-based coordinates
            }
        }
    }

    // Step 2: Identify the fourth cell
    // Extract rows and columns of the three '*' cells
    int row, col;
    if (stars[0].first == stars[1].first) row = stars[2].first;
    else if (stars[0].first == stars[2].first) row = stars[1].first;
    else row = stars[0].first;

    if (stars[0].second == stars[1].second) col = stars[2].second;
    else if (stars[0].second == stars[2].second) col = stars[1].second;
    else col = stars[0].second;

    return {row, col};
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    pair<int, int> fourthCell = findFourthCell(n, m, grid);
    cout << fourthCell.first << " " << fourthCell.second << endl;

    return 0;
}
