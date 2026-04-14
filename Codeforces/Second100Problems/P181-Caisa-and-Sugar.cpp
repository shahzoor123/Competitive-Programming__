#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;  // Read number of sugar types and available dollars

    vector<pair<int, int>> sugar(n);
    for (int i = 0; i < n; i++) {
        cin >> sugar[i].first >> sugar[i].second;
    }

    int maxSweets = -1;

    for (int i = 0; i < n; i++) {
        int dollars = sugar[i].first;
        int cents = sugar[i].second;

        // Check if Caisa can afford this sugar type
        if (s > dollars || (s == dollars && cents == 0)) {
            // Calculate the change in cents
            int changeCents = (s - dollars) * 100 - cents;
            // Since the seller gives sweets instead of cents, the number of sweets is the change in cents modulo 100
            int sweets = changeCents % 100;
            // Update maxSweets if this sugar type gives more sweets
            if (sweets > maxSweets) {
                maxSweets = sweets;
            }
        }
    }

    cout << maxSweets << endl;

    return 0;
}