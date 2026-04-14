#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    vector<int> beauty(n);
    
    for (int i = 0; i < n; i++) {
        cin >> beauty[i];
    }

    sort(beauty.begin(),beauty.end());

    int max_gcd = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = beauty[j] - beauty[i];
            max_gcd = max(max_gcd, diff);
        }
    }
    
    cout << max_gcd << '\n';


}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
