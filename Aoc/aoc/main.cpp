#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <set>

using namespace std;

struct Point {
    long long x, y;
    long long vx, vy;
};

vector<Point> parseInput(const string& filename) {
    vector<Point> points;
    ifstream file(filename);
    string line;
    
    while (getline(file, line)) {
        Point p;
        sscanf(line.c_str(), "p=<%lld,%lld> v=<%lld,%lld>", &p.x, &p.y, &p.vx, &p.vy);
        points.push_back(p);
    }
    return points;
}

void updatePositions(vector<Point>& points) {
    for (auto& p : points) {
        p.x += p.vx;
        p.y += p.vy;
    }
}

pair<pair<long long, long long>, pair<long long, long long>> getBounds(const vector<Point>& points) {
    long long minX = numeric_limits<long long>::max();
    long long maxX = numeric_limits<long long>::min();
    long long minY = numeric_limits<long long>::max();
    long long maxY = numeric_limits<long long>::min();
    
    for (const auto& p : points) {
        minX = min(minX, p.x);
        maxX = max(maxX, p.x);
        minY = min(minY, p.y);
        maxY = max(maxY, p.y);
    }
    return {{minX, minY}, {maxX, maxY}};
}

void printMessage(const vector<Point>& points) {
    auto [mins, maxs] = getBounds(points);
    auto [minX, minY] = mins;
    auto [maxX, maxY] = maxs;
    
    set<pair<long long, long long>> pointSet;
    for (const auto& p : points) {
        pointSet.insert({p.x, p.y});
    }
    
    for (long long y = minY; y <= maxY; y++) {
        for (long long x = minX; x <= maxX; x++) {
            cout << (pointSet.count({x, y}) ? '#' : '.');
        }
        cout << endl;
    }
    cout << endl;
}

bool isMessageVisible(const vector<Point>& points) {
    auto [mins, maxs] = getBounds(points);
    auto [minX, minY] = mins;
    auto [maxX, maxY] = maxs;
    
    long long height = maxY - minY + 1;
    long long width = maxX - minX + 1;
    
    // Message should be reasonably sized to be readable
    return height <= 10 && width <= 100;
}

int findMessageTime(vector<Point> points) {
    int seconds = 0;
    long long prevArea = numeric_limits<long long>::max();
    vector<Point> bestPoints;
    int bestTime = 0;
    bool foundMessage = false;
    
    while (seconds < 11000) {  // Adjusted limit
        updatePositions(points);
        seconds++;
        
        auto [mins, maxs] = getBounds(points);
        auto [minX, minY] = mins;
        auto [maxX, maxY] = maxs;
        
        long long area = (maxX - minX + 1) * (maxY - minY + 1);
        
        if (area < prevArea) {
            if (isMessageVisible(points)) {
                cout << "Possible message at second " << seconds << ":" << endl;
                printMessage(points);
                foundMessage = true;
                bestTime = seconds;
                bestPoints = points;
            }
            prevArea = area;
        } else if (foundMessage && area > prevArea) {
            // If area starts growing after finding a message, we're done
            return bestTime;
        }
    }
    
    return -1;
}

int main() {
    vector<Point> points = parseInput("inputs/day14.txt");
    int result = findMessageTime(points);
    
    if (result != -1) {
        cout << "Final answer: " << result << endl;
    } else {
        cout << "No message found" << endl;
    }
    
    return 0;
}
