#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    pair<int, int> queen = {a, b}; // Red Queen's position
    pair<int, int> alice = {0, 0}; // Alice's initial position

    set<pair<int, int>> visited_positions; // Tracks visited positions of Alice
    visited_positions.insert(alice);

    // Simulate one cycle of Alice's movement
    for (char move : s) {
        if (move == 'N') {
            alice.second += 1;
        } else if (move == 'E') {
            alice.first += 1;
        } else if (move == 'S') {
            alice.second -= 1;
        } else if (move == 'W') {
            alice.first -= 1;
        }

        // Add current position to visited set
        visited_positions.insert(alice);

        // Check if Alice reaches the Red Queen
        if (alice == queen) {
            cout << "YES\n";
            return;
        }
    }

    // Calculate the net displacement after one full sequence
    pair<int, int> displacement = {alice.first, alice.second};

    // If the net displacement is zero, Alice cycles indefinitely in the same positions
    if (displacement == make_pair(0, 0)) {
        cout << (visited_positions.count(queen) ? "YES\n" : "NO\n");
        return;
    }

    // Simulate further cycles until we detect a repeating pattern or find the Queen
    for (int i = 0; i < 100; ++i) { // Limit the number of cycles to prevent infinite loops
        for (char move : s) {
            if (move == 'N') {
                alice.second += 1;
            } else if (move == 'E') {
                alice.first += 1;
            } else if (move == 'S') {
                alice.second -= 1;
            } else if (move == 'W') {
                alice.first -= 1;
            }

            // Check if Alice reaches the Red Queen
            if (alice == queen) {
                cout << "YES\n";
                return;
            }
        }
    }

    // If after multiple cycles Alice never reaches the Queen, output NO
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
