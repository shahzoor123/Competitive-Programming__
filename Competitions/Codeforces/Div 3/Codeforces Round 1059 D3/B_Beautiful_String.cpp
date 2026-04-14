#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}

bool isNonDecreasing(const string &s) {
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] < s[i - 1]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Case 1: already palindrome
    if (isPalindrome(s)) {
        cout << 0 << "\n" << endl;
        return;
    }

    // Case 2: non-decreasing
    if (isNonDecreasing(s)) {
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            cout << i << (i == n ? '\n' : ' ');
        }
        return;
    }

    // Case 3: remove all zeros
    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') indices.push_back(i + 1);
    }

    cout << indices.size() << "\n";
    for (int i = 0; i < (int)indices.size(); i++) {
        cout << indices[i] << (i + 1 == (int)indices.size() ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);<<
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
