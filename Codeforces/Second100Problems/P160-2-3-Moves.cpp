#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int moves = n / 3; 
    int remainder = n % 3; 

    if (remainder == 0) {
        cout << moves << endl;
    } else if (remainder == 1) {
      
        if (moves >= 1) {
            cout << moves - 1 + 2 << endl;
        } else {
   
            cout << 2 << endl;
        }
    } else if (remainder == 2) {
     
        cout << moves + 1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}