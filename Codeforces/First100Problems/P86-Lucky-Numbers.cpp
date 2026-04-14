#include <bits/stdc++.h>
using namespace std;

// Function to calculate the luckiness of a number
int luckiness(int x) {
    int max_digit = -1, min_digit = 10;
    
    while (x > 0) {
        int digit = x % 10;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
        x /= 10;
    }

    return max_digit - min_digit;
}

void solve() {
    int l, r;
    cin >> l >> r;

    int max_luckiness = -1;
    int best_number = l;

    // Iterate through numbers from l to r
    // We can attempt to skip numbers that have a low chance of being the luckiest
    for (int i = r; i >= l; i--) {
        int current_luckiness = luckiness(i);
        if (current_luckiness > max_luckiness) {
            max_luckiness = current_luckiness;
            best_number = i;
        }
        // If luckiness 9 is found, break early as no other number can have a higher luckiness
        if (max_luckiness == 9) {
            break;
        }
    }

    cout << best_number << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
