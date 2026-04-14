#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <tuple>
#include <string>
using namespace std;

using Grid = vector<vector<int>>;
using Position = pair<int, int>;

// Function to read the input file and create a grid
Grid readInput(const string &filename) {
    ifstream file(filename);
    Grid grid;
    string line;

    while (getline(file, line)) {
        vector<int> row;
        for (char ch : line) {
            row.push_back(ch - '0'); // Convert char to int
        }
        grid.push_back(row);
    }

    return grid;
}

// Recursive DFS to find all reachable positions with height 9
void dfs(const Grid &grid, int x, int y, int currentHeight, set<Position> &path, vector<Position> &ninePositions) {
    int rows = grid.size();
    int cols = grid[0].size();

    // If we've reached height 9, this is a valid trail
    if (grid[x][y] == 9) {
        ninePositions.emplace_back(x, y);
        return;
    }

    // Possible moves: up, down, left, right
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for (auto [dx, dy] : directions) {
        int nx = x + dx, ny = y + dy;

        // Check if the new cell is within grid bounds and a valid next step
        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols &&
            path.find({nx, ny}) == path.end() &&
            grid[nx][ny] == currentHeight + 1) {
            
            // Add this step to the current path
            path.insert({nx, ny});
            dfs(grid, nx, ny, grid[nx][ny], path, ninePositions);
            path.erase({nx, ny}); // Backtrack
        }
    }
}

// Function to find all reachable height-9 positions from a trailhead
vector<Position> findTrailToNine(const Grid &grid, Position start) {
    set<Position> path;
    vector<Position> ninePositions;

    // Start DFS
    path.insert(start);
    dfs(grid, start.first, start.second, grid[start.first][start.second], path, ninePositions);

    return ninePositions;
}

// Function to solve the problem by calculating scores for all trailheads
int solveTrailheads(const Grid &grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    vector<int> trailheadScores;

    // Find all trailheads (positions with height 0)
    vector<Position> trailheads;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == 0) {
                trailheads.emplace_back(r, c);
            }
        }
    }

    // Calculate score for each trailhead
    for (const auto &trailhead : trailheads) {
        // Find unique height-9 positions reachable from this trailhead
        vector<Position> reachableNines = findTrailToNine(grid, trailhead);
        set<Position> uniqueNines(reachableNines.begin(), reachableNines.end());
        trailheadScores.push_back(uniqueNines.size());
    }

    // Calculate the total score
    int totalScore = 0;
    for (int score : trailheadScores) {
        totalScore += score;
    }

    return totalScore;
}

// Main function
int main() {
    // Input file path
    string filename = "inputs/day10.txt";

    // Read the input grid
    Grid grid = readInput(filename);

    // Solve the problem
    int totalScore = solveTrailheads(grid);
    cout << "Sum of trailhead scores: " << totalScore << endl;

    return 0;
}



// Part 2

