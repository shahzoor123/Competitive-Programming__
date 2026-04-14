#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<long long> waste;

    // Read waste cell positions and convert to 1D
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        long long pos = (long long)(x - 1) * m + (y - 1);
        waste.push_back(pos);
    }

    // Sort waste positions for binary search
    sort(waste.begin(), waste.end());

    string crops[3] = {"Carrots", "Kiwis", "Grapes"};

    // Process queries 
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        long long pos = (long long)(x - 1) * m + (y - 1);

        // Check if this position is waste
        if (binary_search(waste.begin(), waste.end(), pos)) {
            cout << "Waste" << endl;
        } else {
            // Count how many waste cells come before this position
            int waste_before = lower_bound(waste.begin(), waste.end(), pos) - waste.begin();
            int crop_index = (pos - waste_before) % 3;
            cout << crops[crop_index] << endl;
        }
    }

    return 0;
}
