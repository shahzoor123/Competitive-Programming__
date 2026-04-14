#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to count digits in a number
int countDigits(long long num) {
    return to_string(num).length();
}

// Main logic to find a timely square
long long findTimelySquare(int N) {
    long long base = 45;
    int baseDigits = countDigits(base * base);
    int additionalDigits = N - baseDigits;
    long long candidate;

    if (additionalDigits > 0) {
        string candidateStr = "1" + string(additionalDigits - 1, '0') + "2025";
        candidate = stoll(candidateStr);
    } else {
        candidate = base * base;
    }

    long long sqrtCandidate = sqrt(candidate);

    while (true) {
        long long square = sqrtCandidate * sqrtCandidate;
        string squareStr = to_string(square);

        if (squareStr.length() == N && squareStr.find("2025") != string::npos) {
            return square;
        }
        sqrtCandidate++;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << findTimelySquare(N) << endl;
    }
    return 0;
}
