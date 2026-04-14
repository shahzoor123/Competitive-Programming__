#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;

    if (a+b == 0) {
        cout << "NO" << endl;
        return;
    }
   
    if (abs(a-b) <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
 
    solve();
   
    return 0;
}