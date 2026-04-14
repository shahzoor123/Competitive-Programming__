#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string y_str = "";
        for (int i = 0; i < k; ++i) {
            y_str += x;
        }
        
        if (y_str.length() > 18) {
            cout << "NO\n";
            continue;
        }

        unsigned long long y = stoull(y_str);

        if (isPrime(y)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
