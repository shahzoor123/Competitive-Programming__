#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    int t, n, i, c;
    char x[100010]; 

    cin >> t; 
    while (t--) {
        c = 0; 
        cin >> n >> x; 

        for (i = n - n / 2; i < n; i++) {
            if (x[i] != x[n - i - 1]) {
                if (c > 1) {
                    i = n; // Break the loop if more than one mismatch segment exists
                    c = 3;
                } else {
                    c = 1; // Mark that there's a mismatch
                }
            } else if (c) {
                c = 2; // Mark that mismatches are no longer contiguous
            }
        }

        cout << (c < 3 ? "Yes" : "No") << endl;
    }

    return 0;
}
