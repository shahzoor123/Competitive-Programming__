#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int diff = a - b;
    int rhs = m - n * b;

    // Check if rhs is divisible by (a - b) and x in [0, n]
    if (diff == 0) {
        cout << (n * a == m ? "Yes" : "No") << endl;
    } else if (rhs % diff != 0) {
        cout << "No" << endl;
    } else {
        int x = rhs / diff;
        cout << (x >= 0 && x <= n ? "Yes" : "No") << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();        
    } 
    return 0;
}
