#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        // If n is even, we use all 2s
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++) {
            cout << 2 << " ";
        }
    } else {
        // If n is odd, we use one 3 and the rest as 2s
        cout << n / 2 << endl;
        cout << 3 << " ";
        for (int i = 1; i < n / 2; i++) {
            cout << 2 << " ";
        }
    }
    cout << endl;
    return 0;
}
