#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define dist(a, b) sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2))

void solve() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<string> keyboard(n);
    for (int i = 0; i < n; i++) {
        cin >> keyboard[i];
    }

    int q;
    cin >> q;
    string text;
    cin >> text;

    map<char, vector<pii>> letterPos;
    vector<pii> shiftKeys;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c = keyboard[i][j];
            if (c == 'S') {
                shiftKeys.push_back({i, j});
            } else {
                letterPos[c].push_back({i, j});
            }
        }
    }

    set<char> requiresOtherHand;

    map<char, bool> canTypeUpper;

    int otherHand = 0;

    for (char ch : text) {
        if (islower(ch)) {
            if (letterPos.find(ch) == letterPos.end()) {
                cout << -1 << endl;
                return;
            }
        } else if (isupper(ch)) {
            char lower = tolower(ch);

    
            if (letterPos.find(lower) == letterPos.end() || shiftKeys.empty()) {
                cout << -1 << endl;
                return;
            }

            if (canTypeUpper.find(lower) == canTypeUpper.end()) {
                bool ok = false;
                for (auto lpos : letterPos[lower]) {
                    for (auto spos : shiftKeys) {
                        if (dist(lpos, spos) <= x) {
                            ok = true;
                            break;
                        }
                    }
                    if (ok) break;
                }
                canTypeUpper[lower] = ok;
            }

            if (!canTypeUpper[lower]) {
                otherHand++;
            }
        }
    }

    cout << otherHand << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
