#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b; // Read the values of a and b
        // The minimum value of (c - a) + (b - c) is simply (b - a)
        cout << (b - a) << endl; // Output the result
    }
    return 0;
}
