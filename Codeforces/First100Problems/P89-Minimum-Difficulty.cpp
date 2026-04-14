#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int min_difficulty = INT_MAX;

    // Iterate over all removable holds (excluding first and last)
    for (int i = 1; i < n - 1; ++i) {
        int max_gap = 0;

        // Calculate difficulty after removing the i-th hold
        for (int j = 1; j < n; ++j) {
            if (j == i) continue;

            // Adjust the gap if we skip the i-th hold
            int left = (j == i + 1) ? heights[j - 2] : heights[j - 1];
            int right = heights[j];
            max_gap = max(max_gap, abs(right - left));
        }

        // Update the minimum difficulty
        min_difficulty = min(min_difficulty, max_gap);
    }

    cout << min_difficulty << endl;
}

int main() {
    solve();
    return 0;
}
