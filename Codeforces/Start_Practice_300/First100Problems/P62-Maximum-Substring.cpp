#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        string s; 
        cin >> s;

   
        long long max_ones = 0, max_zeros = 0, current_ones = 0, current_zeros = 0;

        for (char c : s) {
            if (c == '1') {
                current_ones++;
                current_zeros = 0; // Reset zeros count
            } else {
                current_zeros++;
                current_ones = 0; // Reset ones count
            }
            max_ones = max(max_ones, current_ones);
            max_zeros = max(max_zeros, current_zeros);
        }

        // Count total number of 1s and 0s in the string
        long long total_ones = count(s.begin(), s.end(), '1');
        long long total_zeros = n - total_ones;

        // Calculate maximum cost
        long long max_cost = max({
            max_ones * max_ones,          
            max_zeros * max_zeros,       
            total_ones * total_zeros     
        });

        cout << max_cost << endl;
    }

    return 0;
}
