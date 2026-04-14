#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int x[4];
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    // Sort the numbers to make it easier to identify a+b+c
    sort(x, x + 4);

    // The largest number is a+b+c
    int sum = x[3];

    // Remaining three numbers are a+b, a+c, and b+c
    int a = (x[0] + x[1] - x[2]) / 2;
    int b = x[0] - a;
    int c = x[1] - a;

    // Output the result
    cout << a << " " << b << " " << c << endl;
}

int main() {
    solve();
    return 0;
}
