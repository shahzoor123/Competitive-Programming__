#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const string word = "XMAS";

// Directions for searching the word in the grid
const vector<pair<int, int>> directions = {
    {-1, 0}, // Up
    {1, 0},  // Down
    {0, -1}, // Left
    {0, 1},  // Right
    {-1, -1}, // Up-Left
    {-1, 1},  // Up-Right
    {1, -1},  // Down-Left
    {1, 1}    // Down-Right
};

// Function to check if we can find the word starting from (x, y) in a given direction
bool canFindWord(const vector<string>& grid, int x, int y, int dx, int dy) {
    for (int i = 0; i < word.length(); ++i) {
        int nx = x + dx * i;
        int ny = y + dy * i;
        if (nx < 0 || ny < 0 || nx >= grid.size() || ny >= grid[0].size() || grid[nx][ny] != word[i]) {
            return false;
        }
    }
    return true;
}

// Function to count occurrences of "XMAS" in the grid
int countWordOccurrences(const vector<string>& grid) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    
    // Iterate over each cell in the grid
    for (int x = 0; x < rows; ++x) {
        for (int y = 0; y < cols; ++y) {
            // Check all directions from each cell
            for (auto& direction : directions) {
                int dx = direction.first;
                int dy = direction.second;
                if (canFindWord(grid, x, y, dx, dy)) {
                    ++count;
                }
            }
        }
    }
    
    return count;
}

int main() {
    // Read the input grid from the file
    ifstream inputFile("inputs/day4.txt");
    if (!inputFile.is_open()) {
        cerr << "Could not open the file!" << endl;
        return 1;
    }
    
    vector<string> grid;
    string line;
    while (getline(inputFile, line)) {
        grid.push_back(line);
    }
    inputFile.close();

    // Count and print the occurrences of "XMAS"
    int result = countWordOccurrences(grid);
    cout << "The word XMAS appears " << result << " times." << endl;

    return 0;
}



// Part2 



#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

const string FORWARD = "MAS";
const string BACKWARD = "SAM";

// Function to check if we can find a MAS/SAM at given position and direction
bool checkMAS(const vector<string>& grid, int x, int y, int dx, int dy, bool isForward) {
    const string& pattern = isForward ? FORWARD : BACKWARD;
    
    for (int i = 0; i < 3; ++i) {
        int nx = x + (dx * i);
        int ny = y + (dy * i);
        
        if (nx < 0 || nx >= grid.size() || ny < 0 || ny >= grid[0].size() ||
            grid[nx][ny] != pattern[i]) {
            return false;
        }
    }
    return true;
}

// Function to check for X-MAS pattern at a given center point
bool checkXMASPattern(const vector<string>& grid, int centerX, int centerY) {
    // All possible combinations for the two arms of the X
    // Each arm can be either MAS or SAM
    const bool forward = true;
    const bool backward = false;
    
    // Check all possible combinations of forward/backward for both arms
    const vector<pair<bool, bool>> combinations = {
        {forward, forward},
        {forward, backward},
        {backward, forward},
        {backward, backward}
    };
    
    for (const auto& combo : combinations) {
        // Check top-left to bottom-right
        bool topLeft = checkMAS(grid, centerX - 1, centerY - 1, 1, 1, combo.first);
        // Check top-right to bottom-left
        bool topRight = checkMAS(grid, centerX - 1, centerY + 1, 1, -1, combo.second);
        
        if (topLeft && topRight) {
            return true;
        }
    }
    
    return false;
}

int countXMASPatterns(const vector<string>& grid) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    
    // We need at least 3x3 grid for an X-MAS pattern
    if (rows < 3 || cols < 3) return 0;
    
    // Check each possible center point
    // Note: we start from 1 and end at size-2 because we need space for the X pattern
    for (int i = 1; i < rows - 1; ++i) {
        for (int j = 1; j < cols - 1; ++j) {
            if (grid[i][j] == 'A' && checkXMASPattern(grid, i, j)) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    ifstream inputFile("inputs/day4.txt");
    if (!inputFile.is_open()) {
        cerr << "Could not open the file!" << endl;
        return 1;
    }
    
    vector<string> grid;
    string line;
    while (getline(inputFile, line)) {
        grid.push_back(line);
    }
    inputFile.close();

    int result = countXMASPatterns(grid);
    cout << "Number of X-MAS patterns found: " << result << endl;

    return 0;
}
