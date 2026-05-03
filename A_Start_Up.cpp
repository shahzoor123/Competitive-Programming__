#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool isMirrorChar(char c) {
    string valid = "AHIMOTUVWXY";
    return valid.find(c) != string::npos;
}

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    for (char c : s) {
        if (!isMirrorChar(c)) {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] != s[n - 1 - i]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}