#include <bits/stdc++.h>
using namespace std;

bool isUniversal(const string &s) {
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    return s < reversed_s;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (isUniversal(s)) {
        cout << "YES" << endl;
        return;
    }

   
    for (int i = 0; i < n && k > 0; i++) {
        for (int j = n - 1; j > i && k > 0; j--) {
            if (s[i] > s[j]) { 
                swap(s[i], s[j]);
                k--;
            }
        }
    }


    cout << (isUniversal(s) ? "YES" : "NO") << endl;

}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}

