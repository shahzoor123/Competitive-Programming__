#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Read n (number of circles) and m (sum of radii)

        vector<int> x(n), r(n);

        for (int i = 0; i < n; i++) {
            cin >> x[i]; // Read circle centers
        }

        for (int i = 0; i < n; i++) {
            cin >> r[i]; // Read radii
        }


        for (int i : x) cout << i << " ";
        for (int i : r) cout << i << " ";
        cout << "\n";
    }

    return 0;
}
