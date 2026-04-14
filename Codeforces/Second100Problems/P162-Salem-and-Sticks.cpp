#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> sticks(n);
    
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
    }

    int min_a = *min_element(sticks.begin(), sticks.end());
    int max_a = *max_element(sticks.begin(), sticks.end());

    int best_t = -1;
    int min_cost = INT_MAX;

    // Ensure t is at least 1
    for (int t = max(1, min_a - 1); t <= max_a + 1; t++) {
        int total_cost = 0;
        for (int ai : sticks) {
            int cost = min({abs(ai - t), abs(ai - (t - 1)), abs(ai - (t + 1))});
            total_cost += cost;
        }
        if (total_cost < min_cost) {
            min_cost = total_cost;
            best_t = t;
        }
    }

    cout << best_t << " " << min_cost << endl;
}

int main() {
    solve();
    return 0;
}