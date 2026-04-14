#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid(8);
    for (int i = 0; i < 8; ++i) {
        cin >> grid[i];
    }

    for (int i = 0; i < 8; ++i) {
        if(grid[i] == "RRRRRRRR"){
            cout << 'R' << endl;
            return;
        }
    }

    cout << 'B' << endl;
   
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        string dummy;
        getline(cin, dummy); 
        solve();
    }

    return 0;
}
