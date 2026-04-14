#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> digits(n);
    int count_5 = 0, count_0 = 0;

    // Count the number of 5's and 0's
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
        if (digits[i] == 5) count_5++;
        else if (digits[i] == 0) count_0++;
    }

    // If there are no 0's, it's impossible to form a valid number
    if (count_0 == 0) {
        cout << -1 << endl;
        return 0;
    }

    // If there are less than 9 5's, the only valid number is 0
    if (count_5 < 9) {
        cout << 0 << endl;
        return 0;
    }

    // Use the largest multiple of 9 5's
    count_5 -= count_5 % 9;

    // Output the result
    for (int i = 0; i < count_5; i++) cout << 5;
    for (int i = 0; i < count_0; i++) cout << 0;
    cout << endl;

    return 0;
}
