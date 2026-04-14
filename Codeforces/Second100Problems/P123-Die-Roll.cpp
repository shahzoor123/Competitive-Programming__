#include <bits/stdc++.h>
using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve() {
    int Y, W;
    cin >> Y >> W;

    // Find the maximum roll already made
    int maxRoll = max(Y, W);

    // Calculate the number of favorable outcomes
    int favorableOutcomes = 6 - maxRoll + 1;

    // Simplify the fraction
    int g = gcd(favorableOutcomes, 6);
    cout << favorableOutcomes / g << "/" << 6 / g << endl;
}

int main() {
    solve();
    return 0;
}
