#include <iostream>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int odd_count = 0, even_count = 0;
    int total_sum = 0; // To store the sum of all elements
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        total_sum += num; // Add to the total sum
        if (num % 2 == 1)
            odd_count++;
        else
            even_count++;
    }
    
    // If there are no odd numbers, we can never make an odd sum
    if (odd_count == 0) {
        cout << "No" << endl;
        return;
    }
    
    // If x is greater than the total elements, it's impossible
    if (x > n) {
        cout << "No" << endl;
        return;
    }
    
    // Special case: x == n
    if (x == n) {
        if (total_sum % 2 == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return;
    }
    
    // To make the sum odd, we need at least one odd number.
    // If x is odd, we can always pick an odd number of odd elements.
    if (x % 2 == 1) {
        cout << "Yes" << endl;
        return;
    }
    
    // If x is even, we need at least one even number to pair with the odd numbers
    if (even_count > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}