#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int height = 0;
    int used = 0;   
    int level = 1; 

    while (true) {
        int need = level * (level + 1) / 2; 
        if (used + need > n) break; 
        used += need;
        height++;
        level++;
    }

    cout << height << endl;
}

int main() {
    solve();
    return 0;
}