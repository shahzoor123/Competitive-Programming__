#include <iostream>
#include <cmath>
using namespace std;

int minOperations(int n, int k) {
    if (n % 2 == 0) {
        return (n + (k - 1) - 1) / (k - 1);
    } else {
       
        return 1 + ((n - k) + (k - 1) - 1) / (k - 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minOperations(n, k) << endl;
    }
    return 0;
}