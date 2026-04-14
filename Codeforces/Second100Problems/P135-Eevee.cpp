#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string pattern;
    cin >> pattern;

    // List of all possible evolutions
    vector<string> evolutions = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

    // Filter evolutions by length
    vector<string> candidates;
    for (const string& name : evolutions) {
        if (name.length() == n) {
            candidates.push_back(name);
        }
    }

    // Match the pattern
    for (const string& name : candidates) {
        bool match = true;
        for (int i = 0; i < n; i++) {
            if (pattern[i] != '.' && pattern[i] != name[i]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << name << endl;
            return;
        }
    }
}

int main() {
    solve();
    return 0;
}