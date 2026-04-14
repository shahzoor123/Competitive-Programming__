#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_xor = 0;

    // Iterate over all possible starting points of the segment
    for (int i = 0; i < n; ++i) {
        int current_xor = 0;
        // Iterate over all possible ending points of the segment
        for (int j = i; j < n; ++j) {
            current_xor ^= a[j];
            if (current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }

    cout << max_xor << endl;

    return 0;
}