#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int x = 0;
    int y = 0;

    x = A - C;
    y = B - D;


    cout << x << " " << y << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
