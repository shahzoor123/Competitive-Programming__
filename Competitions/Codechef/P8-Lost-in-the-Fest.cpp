#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int &h : heights) {
        cin >> h;
    }

    int bhoomi_height = heights.back();
    int seconds = 0;
    int lastGreaterheight;



    bool can_see = true;
    for (int i = 0; i < n - 1; ++i) {
        if (heights[i] >= bhoomi_height) {
            can_see = false;
            break;
        }
    }
    if (can_see) {
        cout << 0 << endl;
        return;
    }

    // Last tallest person check
    for (int pos = n - 2; pos >= 0; --pos) {
        bool valid = true;
        for (int i = 0; i < pos; ++i) {
            if (heights[i] >= bhoomi_height) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << (n - 1 - pos) << endl;
            return;
        }
    }


    cout << n - 1 << endl;
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
