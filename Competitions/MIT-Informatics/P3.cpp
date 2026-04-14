#include <iostream>
#include <string>
using namespace std;

int minimum_operations(const string &S1, const string &S2) {
    int countA1 = 0, countB1 = 0, countA2 = 0, countB2 = 0;
    int n = S1.size();

    // Count contiguous 'A's and 'B's in S1
    for (int i = 0; i < n; ++i) {
        if (S1[i] == 'A') {
            countA1++;
            countB1 = 0;
        } else {
            countB1++;
            countA1 = 0;
        }
    }

    // Count contiguous 'A's and 'B's in S2
    for (int i = 0; i < n; ++i) {
        if (S2[i] == 'A') {
            countA2++;
            countB2 = 0;
        } else {
            countB2++;
            countA2 = 0;
        }
    }

    // If counts match exactly, no operations are needed
    if (countA1 == countA2 && countB1 == countB2) {
        return 0;
    }

    // If counts don't match, transformation is impossible
    if (countA1 != countA2 || countB1 != countB2) {
        return -1;
    }

    // Calculate minimum operations
    int operations = abs(countA2 - countA1) + abs(countB2 - countB1);
    return operations;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;
        cout << minimum_operations(S1, S2) << endl;
    }
    return 0;
}
