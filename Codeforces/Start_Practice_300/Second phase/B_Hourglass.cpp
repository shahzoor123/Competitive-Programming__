#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll s, k, m;
    cin >> s >> k >> m;

    ll remainingSand = s;
    ll timePassed = 0;

    while (timePassed < m && remainingSand > 0) {
        // time until next flip
        ll timeToFlip = k;

        // time we can actually let sand fall
        ll fallTime = min({timeToFlip, m - timePassed, remainingSand});

        remainingSand -= fallTime;
        timePassed += fallTime;

        // if we reached a flip time, flip instantly
        if (fallTime == timeToFlip) {
            // flip resets flow, sand stays same
            continue;
        } else {
            break;
        }
    }

    cout << remainingSand << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
