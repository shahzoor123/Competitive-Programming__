#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> l1(n), l2(n);
    for (int &x : l1) cin >> x;
    for (int &x : l2) cin >> x;
    
    int answers = 0;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        int difference = (l2[i] - l1[i] + 9) % 9;
        int ans = 0;
        
        if (difference != 0) {
            ans = min(difference, 9 - difference);
        }
        
        answers += ans;
        
        if (ans == 0) {
            res.push_back(9);
        } else {
            res.push_back(9 - (2 * ans));
        }
    }
    
    int remainder = k - answers;
    
    if (remainder < 0) {
        cout << "NO\n";
    } else if (remainder % 2 == 0) {
        cout << "YES\n";
    } else {
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (remainder >= res[i]) {
                flag = true;
                break;
            }
        }
        
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        solve();
    }
    
    return 0;
}