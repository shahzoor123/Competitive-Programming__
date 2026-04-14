#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6 + 10;  // Increase the limit to 1,000,000
int extremeRound[MAX_N];      // Array to store whether a number is an extreme round number
int prefixSum[MAX_N];        // Prefix sum to store the count of extreme round numbers up to index i


int countNonZeroDigits(int num) {
    if (num == 0) return 0;
    int count = 0;
    while (num > 0) {
        if (num % 10 != 0) count++;
        num /= 10;
    }
    return count;
}

bool isExtremeRound(int num) {
    return countNonZeroDigits(num) == 1;
}

// Precompute extreme round numbers for all numbers up to MAX_N
void precomputeExtremeRounds() {
    for (int i = 1; i < MAX_N; i++) {
        extremeRound[i] = isExtremeRound(i); 
    }

    // Create the prefix sum array
    for (int i = 1; i < MAX_N; i++) {
        prefixSum[i] = prefixSum[i - 1] + extremeRound[i];
    }
}

int main() {

    precomputeExtremeRounds();

    int t;
    cin >> t;  


    while (t--) {
        int n;
        cin >> n;
        cout << prefixSum[n] << endl;
    }

    return 0;
}
