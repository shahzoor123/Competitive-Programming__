#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) j++;
        i++;
    }
    return j == t.size();
}

int main() {
    string s, t;
    cin >> s >> t;

    map<char, int> freqS, freqT;
    for (char c : s) freqS[c]++;
    for (char c : t) freqT[c]++;

    bool possible = true;
    for (auto [ch, cnt] : freqT) {
        if (freqS[ch] < cnt) {
            possible = false;
            break;
        }
    }

    if (!possible) {
        cout << "need tree";
        return 0;
    }

    if (isSubsequence(s, t)) {
        cout << "automaton";
        return 0;
    }

    if (s.size() == t.size()) {
        cout << "array";
        return 0;
    }

    cout << "both";
    return 0;
}
