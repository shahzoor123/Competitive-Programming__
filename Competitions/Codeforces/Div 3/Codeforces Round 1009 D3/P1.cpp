#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;  

        bool same = false;

        if (l == r && r == d && d == u){
            same = true;
        }

        if (same){
           cout << "YES" << "\n"; 
        }
        else{
            cout << "NO" << "\n";
        }



    }

    return 0;
}
