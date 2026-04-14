#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of citizens
    vector<int> a(n);

    // Input welfare of each citizen
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Find the maximum welfare
    int max_welfare = *max_element(a.begin(), a.end());

    // Calculate the total cost
    int total_cost = 0;
    for (int i = 0; i < n; ++i) {
        total_cost += (max_welfare - a[i]);
    }

    // Output the result
    cout << total_cost << endl;

    return 0;
}
