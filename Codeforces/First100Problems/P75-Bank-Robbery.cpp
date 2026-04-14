#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the input values
    long long a, b, c;
    cin >> a >> b >> c;

    int n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    // If Oleg is between the guards
    if (b < a && a < c) {
        long long totalBanknotes = 0;

        // Check each safe's position and add banknotes if within range
        for (int i = 0; i < n; ++i) {
            if (x[i] > b && x[i] < c) { // Safe is in the valid range
                totalBanknotes++;
            }
        }

        cout << totalBanknotes << endl;
    } else {
        // Oleg can't pass both guards
        cout << 0 << endl;
    }

    return 0;
}
