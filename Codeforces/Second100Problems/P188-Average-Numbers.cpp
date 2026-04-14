#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long total_sum = 0;

    // Read the sequence and calculate the total sum
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    vector<int> result;

    // Check each element
    for (int i = 0; i < n; i++) {
        long long sum_of_others = total_sum - a[i];
        if (a[i] * (n - 1) == sum_of_others) {
            result.push_back(i + 1); // Indices are 1-based
        }
    }

    // Output the result
    cout << result.size() << endl;
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}