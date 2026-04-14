#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

long long calculateDistance(const pair<int, int>& a, const pair<int, int>& b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

long long calculateMinimumTime(int N, vector<pair<int, int>>& cities) {
    vector<bool> visited(N, false);
    long long totalTime = 0;
    int currentCity = 0; // Start from city 0
    visited[currentCity] = true;

    for (int i = 1; i < N; i++) {
        long long minTime = LONG_MAX;
        int nextCity = -1;

        // Find the nearest unvisited city
        for (int j = 0; j < N; j++) {
            if (!visited[j]) {
                long long time = calculateDistance(cities[currentCity], cities[j]);
                if (time < minTime) {
                    minTime = time;
                    nextCity = j;
                }
            }
        }

        // Move to the nearest city
        totalTime += minTime;
        visited[nextCity] = true;
        currentCity = nextCity;
    }

    // Return to the starting city
    totalTime += calculateDistance(cities[currentCity], cities[0]);

    return totalTime;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<pair<int, int>> cities(N);
        for (int i = 0; i < N; i++) {
            cin >> cities[i].first >> cities[i].second;
        }
        cout << calculateMinimumTime(N, cities) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}