// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <set>

// using namespace std;

// struct Position {
//     int x, y;
//     bool operator<(const Position &other) const {
//         return tie(x, y) < tie(other.x, other.y);
//     }
// };

// void readInput(vector<string> &grid, const string &filename) {
//     ifstream file(filename);
//     string line;
//     while (getline(file, line)) {
//         grid.push_back(line);
//     }
// }

// pair<int, int> getDirection(char facing) {
//     switch (facing) {
//         case '^': return {-1, 0}; // up
//         case 'v': return {1, 0};  // down
//         case '<': return {0, -1}; // left
//         case '>': return {0, 1};  // right
//     }
//     return {0, 0};
// }

// char turnRight(char facing) {
//     switch (facing) {
//         case '^': return '>';
//         case '>': return 'v';
//         case 'v': return '<';
//         case '<': return '^';
//     }
//     return facing;
// }

// bool isValid(const vector<string> &grid, int x, int y) {
//     return x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size();
// }

// int predictPath(vector<string> &grid) {
//     int rows = grid.size(), cols = grid[0].size();
//     Position guardPos;
//     char facing = '^';

//     // Find the guard's starting position and facing
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             if (grid[i][j] == '^' || grid[i][j] == 'v' || grid[i][j] == '<' || grid[i][j] == '>') {
//                 guardPos = {i, j};
//                 facing = grid[i][j];
//                 grid[i][j] = '.'; // Remove the initial guard marker
//                 break;
//             }
//         }
//     }

//     set<Position> visited;
//     visited.insert(guardPos);

//     while (true) {
//         auto [dx, dy] = getDirection(facing);
//         int nx = guardPos.x + dx, ny = guardPos.y + dy;

//         if (!isValid(grid, nx, ny) || grid[nx][ny] == '#') {
//             facing = turnRight(facing); // Turn right
//         } else {
//             guardPos = {nx, ny};
//             visited.insert(guardPos);
//         }

//         if (!isValid(grid, guardPos.x + dx, guardPos.y + dy)) {
//             break; // Guard will leave the grid on the next step
//         }
//     }

//     return visited.size();
// }

// int main() {
//     vector<string> grid;
//     readInput(grid, "inputs/day6.txt");

//     int result = predictPath(grid);
//     cout << "Distinct positions visited: " << result << endl;

//     return 0;
// }



// Part 2



#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

// Hash function for State
struct State {
    int x, y;
    char facing;
    
    bool operator==(const State& other) const {
        return x == other.x && y == other.y && facing == other.facing;
    }
};

// Custom hash function for State
struct StateHash {
    size_t operator()(const State& s) const {
        return (s.x * 31 + s.y) * 31 + s.facing;
    }
};

inline pair<int, int> getDirection(char facing) {
    switch (facing) {
        case '^': return {-1, 0};
        case 'v': return {1, 0};
        case '<': return {0, -1};
        case '>': return {0, 1};
    }
    return {0, 0};
}

inline char turnRight(char facing) {
    switch (facing) {
        case '^': return '>';
        case '>': return 'v';
        case 'v': return '<';
        case '<': return '^';
    }
    return facing;
}

inline bool isValid(int x, int y, int rows, int cols) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

bool doesGuardLoop(const vector<string>& grid, int startX, int startY, char startFacing, int obstX, int obstY) {
    unordered_set<State, StateHash> visited;
    State current = {startX, startY, startFacing};
    int rows = grid.size(), cols = grid[0].size();
    int steps = 0;
    const int maxSteps = rows * cols * 4;

    while (steps++ < maxSteps) {
        if (!visited.insert(current).second) {
            return true;  // Loop found
        }

        auto [dx, dy] = getDirection(current.facing);
        int nx = current.x + dx, ny = current.y + dy;

        if (!isValid(nx, ny, rows, cols) || grid[nx][ny] == '#' || 
            (nx == obstX && ny == obstY)) {
            current.facing = turnRight(current.facing);
            continue;
        }

        current.x = nx;
        current.y = ny;

        if (!isValid(current.x + dx, current.y + dy, rows, cols)) {
            return false;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Read input
    vector<string> grid;
    string line;
    ifstream file("inputs/day6.txt");
    while (getline(file, line)) {
        grid.push_back(line);
    }

    int rows = grid.size(), cols = grid[0].size();
    int startX = -1, startY = -1;
    char startFacing;

    // Find starting position
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            char c = grid[i][j];
            if (c == '^' || c == 'v' || c == '<' || c == '>') {
                startX = i;
                startY = j;
                startFacing = c;
                grid[i][j] = '.';
                goto found;
            }
        }
    }
    found:

    // Count valid positions
    int validPositions = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == '.' && (i != startX || j != startY)) {
                if (doesGuardLoop(grid, startX, startY, startFacing, i, j)) {
                    validPositions++;
                }
            }
        }
    }

    cout << "Valid obstruction positions: " << validPositions << endl;
    return 0;
}
