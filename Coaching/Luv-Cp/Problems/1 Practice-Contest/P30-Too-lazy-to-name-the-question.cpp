#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main () {
    int A, B, C;
    cin >> A >> B >> C;

    int cthnumber;

    for (int i = 2; C > 0; i++) {
        if (i % A == 0 || i % B == 0) {
            C--;
            cthnumber = i;
        }
    }

    // Calculate LCM using the formula: lcm = (A * B) / gcd(A, B)
    int lcm = (A * B) / __gcd(A, B);

    int step;
    if (cthnumber % A == 0 && cthnumber % B == 0) {
        step = lcm;
    } else if (cthnumber % A == 0) {
        step = A;
    } else {
        step = B;
    }

    for (int i = cthnumber; i >= 0; i -= step) {
        cout << i << " ";
    }
}
