#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(2 * n); // (value, index)
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1; // 1-based index
    }

    // Separate odd and even numbers
    vector<pair<int, int>> odds, evens;
    for (auto &x : a) {
        if (x.first % 2 == 1)
            odds.push_back(x);
        else
            evens.push_back(x);
    }

    // Determine which two to discard
    vector<pair<int, int>> pairs;
    if (odds.size() % 2 == 1) {
        // Discard one odd and one even
        odds.pop_back();
        evens.pop_back();
    } else {
        // Discard two odds or two evens
        if (odds.size() >= 2) {
            odds.pop_back();
            odds.pop_back();
        } else {
            evens.pop_back();
            evens.pop_back();
        }
    }

    // Pair remaining odds
    for (int i = 0; i < odds.size(); i += 2) {
        pairs.emplace_back(odds[i].second, odds[i + 1].second);
    }
    // Pair remaining evens
    for (int i = 0; i < evens.size(); i += 2) {
        pairs.emplace_back(evens[i].second, evens[i + 1].second);
    }

    // Output the pairs
    for (auto &p : pairs) {
        cout << p.first << " " << p.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}