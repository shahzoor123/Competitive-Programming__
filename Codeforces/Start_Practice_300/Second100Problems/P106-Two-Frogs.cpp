#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    // Ensure Alice and Bob start on distinct positions
    if (a == b) {
        cout << "NO" << endl;
        return;
    }

    vector<bool> lillypads(n + 1, true);
    lillypads[a] = false; // Alice's position
    lillypads[b] = false; // Bob's position

    bool alice_turn = true;

    while (true) {
        bool move_made = false;

        if (alice_turn) {
            // Alice's turn
            if (a > b) {
                // If Alice is right of Bob, try to move left first to trap Bob
                if (a - 1 >= 1 && lillypads[a - 1] && a - 1 != b) {
                    lillypads[a] = true;  // Free up previous position
                    a--;
                    lillypads[a] = false; // Mark new position
                    move_made = true;
                }
            } else {
                // If Alice is left of Bob, try to move right to escape
                if (a + 1 <= n && lillypads[a + 1] && a + 1 != b) {
                    lillypads[a] = true;  // Free up previous position
                    a++;
                    lillypads[a] = false; // Mark new position
                    move_made = true;
                }
            }
        } else {
            // Bob's turn - try to move towards Alice
            if (b < a) {
                // If Bob is left of Alice, try right first
                if (b + 1 <= n && lillypads[b + 1] && b + 1 != a) {
                    lillypads[b] = true;  // Free up previous position
                    b++;
                    lillypads[b] = false; // Mark new position
                    move_made = true;
                } else if (b - 1 >= 1 && lillypads[b - 1] && b - 1 != a) {
                    lillypads[b] = true;
                    b--;
                    lillypads[b] = false;
                    move_made = true;
                }
            } else {
                // If Bob is right of Alice, try left first
                if (b - 1 >= 1 && lillypads[b - 1] && b - 1 != a) {
                    lillypads[b] = true;
                    b--;
                    lillypads[b] = false;
                    move_made = true;
                } else if (b + 1 <= n && lillypads[b + 1] && b + 1 != a) {
                    lillypads[b] = true;
                    b++;
                    lillypads[b] = false;
                    move_made = true;
                }
            }
        }

        // If no valid move is possible, the current player loses
        if (!move_made) {
            if (alice_turn) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            return;
        }

        // Toggle turn
        alice_turn = !alice_turn;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
