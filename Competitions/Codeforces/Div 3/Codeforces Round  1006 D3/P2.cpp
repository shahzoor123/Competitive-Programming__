#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count_dash = 0;
    int count_underscore = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '-') {
            count_dash++;
        } else if (s[i] == '_') {
            count_underscore++;
        }
    }

 
    if (count_dash < 2 || count_underscore == 0) {
        cout << 0 << endl;
        return;
    } 


    long long left_dashes = count_dash / 2;
    long long right_dashes = count_dash - left_dashes;

    long long result = left_dashes * count_underscore * right_dashes;
    
    cout << result << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}