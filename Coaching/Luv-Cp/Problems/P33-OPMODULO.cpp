#include <iostream>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    unsigned long long ans = 0;

    // Start with x = 1 and double it in each iteration
    for (long long x = 1; x <= r; x *= 2) {
        // Only add to ans if x is within the range [l, r]
        
        if (x >= l) {
            cout << x << endl;
            ans += x;
        }
    }

    cout << ans << endl;

    return 0;
}
