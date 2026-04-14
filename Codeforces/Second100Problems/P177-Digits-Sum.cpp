#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        // The number of interesting numbers is floor((n + 1) / 10)
        cout << (n + 1) / 10 << endl;
    }
    return 0;
}