#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n;) {
        if (s[i] == 'M') {
            i++;  // Move past the 'M'

            // Check if the substring after "M" is a valid repetition of "IT"
            if (i >= n || s.substr(i, 2) != "IT") {
                cout << "NO" << endl;
                return;
            }

            // Keep checking the "IT" repetitions until we find another "M" or reach the end
            while (i + 1 < n && s.substr(i, 2) == "IT") {
                i += 2;  // Move forward by 2 characters after finding "IT"
            }

        } else {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
