#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find the minimum element
    int minElement = *min_element(a.begin(), a.end());

    // Add 1 to the minimum element
    for (int i = 0; i < n; i++) {
        if (a[i] == minElement) {
            a[i] += 1;
            break; // Add 1 to only one occurrence of the minimum element
        }
    }

    // Calculate the product
    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= a[i];
    }

    cout << product << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}