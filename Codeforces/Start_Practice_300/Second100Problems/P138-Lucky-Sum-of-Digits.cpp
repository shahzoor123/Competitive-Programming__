#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int count4 = -1, count7 = -1;

    // Iterate over the possible number of 7s (from maximum to minimum)
    for (int i = n / 7; i >= 0; --i) {
        int remaining = n - (i * 7);
        if (remaining % 4 == 0) {
            count4 = remaining / 4;
            count7 = i;
            break; // Since we are iterating from maximum, the first valid combination will have the most 7s.
        }
    }

    if (count4 == -1 && count7 == -1) {
        cout << -1 << endl;
    } else {
        // Construct the lucky number with count4 4s followed by count7 7s
        string result = string(count4, '4') + string(count7, '7');
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}