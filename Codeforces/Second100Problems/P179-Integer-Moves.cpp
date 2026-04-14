#include <iostream>
#include <cmath>
using namespace std;

bool isIntegerDistance(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int distSq = dx * dx + dy * dy;
    int dist = sqrt(distSq);
    return dist * dist == distSq; // Check if it's a perfect square
}

void solve() {
    int x, y;
    cin >> x >> y;
    
    if (x == 0 && y == 0) {
        cout << 0 << "\n";
        return;
    }
    
    if (isIntegerDistance(0, 0, x, y)) {
        cout << 1 << "\n";
        return;
    }
    
    // Check if we can reach (x, y) in 2 moves
    for (int i = -50; i <= 50; ++i) {
        for (int j = -50; j <= 50; ++j) {
            if (isIntegerDistance(0, 0, i, j) && isIntegerDistance(i, j, x, y)) {
                cout << 2 << "\n";
                return;
            }
        }
    }
    
    // Otherwise, worst case 3 moves
    cout << 3 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}