#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr1(n), arr2(n);
        for (int i = 0; i < n; ++i) cin >> arr1[i];
        for (int i = 0; i < n; ++i) cin >> arr2[i];

        unordered_map<int, int> freq1, freq2;

        // Compute max consecutive frequency in arr1
        int current = arr1[0], count = 1;
        freq1[current] = 1;
        for (int i = 1; i < n; ++i) {
            if (arr1[i] == current) {
                count++;
            } else {
                current = arr1[i];
                count = 1;
            }
            freq1[current] = max(freq1[current], count);
        }

        // Compute max consecutive frequency in arr2
        current = arr2[0], count = 1;
        freq2[current] = 1;
        for (int i = 1; i < n; ++i) {
            if (arr2[i] == current) {
                count++;
            } else {
                current = arr2[i];
                count = 1;
            }
            freq2[current] = max(freq2[current], count);
        }

        int max_total = 0;
        for (auto &[num, f1] : freq1) {
            max_total = max(max_total, f1 + freq2[num]);
        }
        for (auto &[num, f2] : freq2) {
            if (freq1.find(num) == freq1.end()) {
                max_total = max(max_total, f2);
            }
        }

        cout << max_total << '\n';
    }

    return 0;
}
