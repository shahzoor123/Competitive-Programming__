#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int zero = 3, one = 1, two = 2, three = 1, five = 1;
    int step = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0 && zero > 0) {
            zero--;
        } 
        else if (a[i] == 1 && one > 0) {
            one--;
        } 
        else if (a[i] == 2 && two > 0) {
            two--;
        } 
        else if (a[i] == 3 && three > 0) {
            three--;
        } 
        else if (a[i] == 5 && five > 0) {
            five--;
        }

        if (zero == 0 && one == 0 && two == 0 && three == 0 && five == 0) {
            cout << i + 1 << '\n';
            return;
        }
    }

    cout << 0 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}