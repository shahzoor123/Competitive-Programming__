#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point& other) const {
        return tie(x, y) < tie(other.x, other.y);
    }
};

// Function to check if three points are collinear
bool isCollinear(const Point& p1, const Point& p2, const Point& p3) {
    long long dx1 = p2.x - p1.x;
    long long dy1 = p2.y - p1.y;
    long long dx2 = p3.x - p2.x;
    long long dy2 = p3.y - p2.y;
    return dx1 * dy2 == dx2 * dy1;
}

// Function to calculate distance between two points
double distance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

// Function to find antinodes for a given frequency
set<Point> findAntinodes(const vector<Point>& antennas, int rows, int cols) {
    set<Point> antinodes;
    const double EPSILON = 1e-10;  // For floating point comparison
    
    // Check each pair of antennas
    for (size_t i = 0; i < antennas.size(); ++i) {
        for (size_t j = i + 1; j < antennas.size(); ++j) {
            const Point& a1 = antennas[i];
            const Point& a2 = antennas[j];
            
            // Calculate vector between antennas
            double dx = a2.x - a1.x;
            double dy = a2.y - a1.y;
            double len = sqrt(dx * dx + dy * dy);
            
            if (len < EPSILON) continue;  // Skip if antennas are at same point
            
            // Normalize direction vector
            dx /= len;
            dy /= len;
            
            // Check both sides of the antenna pair
            for (int side = -1; side <= 1; side += 2) {
                // Calculate potential antinode positions
                for (int mult = 1; mult <= 2; mult++) {
                    // Try both antennas as the closer one
                    Point p1 = {
                        static_cast<int>(round(a1.x + side * mult * len * dx)),
                        static_cast<int>(round(a1.y + side * mult * len * dy))
                    };
                    Point p2 = {
                        static_cast<int>(round(a2.x + side * mult * len * dx)),
                        static_cast<int>(round(a2.y + side * mult * len * dy))
                    };
                    
                    // Check if points are within bounds
                    if (p1.x >= 0 && p1.x < rows && p1.y >= 0 && p1.y < cols) {
                        double d1 = distance(p1, a1);
                        double d2 = distance(p1, a2);
                        if (abs(d1/d2 - 2.0) < EPSILON || abs(d2/d1 - 2.0) < EPSILON) {
                            antinodes.insert(p1);
                        }
                    }
                    
                    if (p2.x >= 0 && p2.x < rows && p2.y >= 0 && p2.y < cols) {
                        double d1 = distance(p2, a1);
                        double d2 = distance(p2, a2);
                        if (abs(d1/d2 - 2.0) < EPSILON || abs(d2/d1 - 2.0) < EPSILON) {
                            antinodes.insert(p2);
                        }
                    }
                }
            }
        }
    }
    
    return antinodes;
}

int main() {
    ifstream file("inputs/day8.txt");
    if (!file.is_open()) {
        cerr << "Could not open file" << endl;
        return 1;
    }

    vector<string> grid;
    string line;
    while (getline(file, line)) {
        grid.push_back(line);
    }

    int rows = grid.size();
    int cols = grid[0].size();

    map<char, vector<Point>> antennasByFreq;

    // Find all antennas
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            char c = grid[i][j];
            if (c != '.') {
                antennasByFreq[c].push_back({i, j});
            }
        }
    }

    set<Point> allAntinodes;
    for (const auto& [freq, antennas] : antennasByFreq) {
        if (antennas.size() >= 2) {
            auto freqAntinodes = findAntinodes(antennas, rows, cols);
            allAntinodes.insert(freqAntinodes.begin(), freqAntinodes.end());
        }
    }

    // Print debug information
    cout << "Grid dimensions: " << rows << "x" << cols << endl;
    cout << "Number of frequencies: " << antennasByFreq.size() << endl;
    for (const auto& [freq, antennas] : antennasByFreq) {
        cout << "Frequency " << freq << ": " << antennas.size() << " antennas" << endl;
    }
    cout << "Number of unique antinode locations: " << allAntinodes.size() << endl;

    return 0;
}



// Part 2 

#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <algorithm> // For max
#include <numeric>   // For gcd (C++17)

using namespace std;

// Function to parse the grid and collect antenna positions by frequency
map<char, vector<pair<int, int>>> parseGrid(const vector<string>& grid) {
    map<char, vector<pair<int, int>>> antennaPositions;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            char ch = grid[r][c];
            if (isalnum(ch)) { // Antennas are alphanumeric
                antennaPositions[ch].emplace_back(r, c);
            }
        }
    }
    return antennaPositions;
}

// Function to compute all unique antinodes
int findAllAntinodes(const vector<string>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    auto antennaPositions = parseGrid(grid);

    set<pair<int, int>> uniqueAntinodes;

    for (const auto& [freq, positions] : antennaPositions) {
        int n = positions.size();
        if (n < 2) continue; // Skip if fewer than 2 antennas

        // Add all antenna positions as antinodes
        uniqueAntinodes.insert(positions.begin(), positions.end());

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int r1 = positions[i].first, c1 = positions[i].second;
                int r2 = positions[j].first, c2 = positions[j].second;

                // Compute direction vector
                int dr = r2 - r1, dc = c2 - c1;

                // Reduce direction vector to smallest integer steps
                int gcdValue = std::abs(std::gcd(dr, dc));
                dr /= gcdValue;
                dc /= gcdValue;

                // Generate all points along the line
                for (int k = -max(rows, cols); k <= max(rows, cols); ++k) {
                    int rAntin = r1 + k * dr;
                    int cAntin = c1 + k * dc;

                    // Add valid antinodes within bounds
                    if (rAntin >= 0 && rAntin < rows && cAntin >= 0 && cAntin < cols) {
                        uniqueAntinodes.emplace(rAntin, cAntin);
                    }
                }
            }
        }
    }

    return uniqueAntinodes.size();
}

int main() {
    // Read the input file
    ifstream inputFile("inputs/day8.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    vector<string> grid;
    string line;
    while (getline(inputFile, line)) {
        grid.push_back(line);
    }
    inputFile.close();

    // Compute and print the result
    int result = findAllAntinodes(grid);
    cout << "Number of unique antinode locations: " << result << endl;

    return 0;
}
