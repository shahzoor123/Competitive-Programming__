#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int oneOvenTime = ((n + k - 1) / k) * t;


    int twoOvenTime = 0;
    int cakesBakedBeforeSecondOven = (d / t) * k;
    if (cakesBakedBeforeSecondOven >= n) {

        twoOvenTime = ((n + k - 1) / k) * t;
    } else {

        int remainingCakes = n - cakesBakedBeforeSecondOven;
        twoOvenTime = d + ((remainingCakes + 2 * k - 1) / (2 * k)) * t;
    }


    if (twoOvenTime < oneOvenTime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
    return 0;
}