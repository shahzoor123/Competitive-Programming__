#include <bits/stdc++.h>
using namespace std;

void solve() {
    int meal[3], ans = 0;
    for (int i = 0; i < 3; i++) {
        cin >> meal[i];
        if (meal[i] > 0) {
            ans++;
            meal[i]--;
        }
    }
    sort(meal, meal + 3);
    
    // Combine the conditions into one
    if (meal[0] > 2) ans += 4;
    else if (meal[0] == 2) ans += 3;
    else if (meal[0] == 1) ans += (meal[2] > 1) ? 2 : 1;
    else if (meal[1] > 0) ans++;

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
