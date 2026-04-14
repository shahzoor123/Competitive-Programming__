#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<int> profit;

    for (int i = 0; i < n - 1; ++i) {  // Fixed loop bound
        int lend = prices[i];
        int sell = prices[i+1];
        int max_profit = (lend - sell) - c;
        profit.push_back(max_profit);
    }

    int total_raspberry = *max_element(profit.begin(), profit.end());
    total_raspberry = max(total_raspberry, 0);
    cout << total_raspberry << endl;
}

int main() {
    solve();
    return 0;
}
