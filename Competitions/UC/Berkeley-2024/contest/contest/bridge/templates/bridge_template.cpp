#include <iostream>
#include <algorithm>
#include <climits>   // For LONG_LONG_MAX
using namespace std;

/**
 * Return the sum of A and B.
 *
 * B: a non-negative integer
 * N: a positive integer
 * S: an array of N integers
 */
long long solve(long long B, int N, long long S[]) {
    // Initialize the variables to track the best height, danger, and cost.
    long long bestHeight = -1;
    long long minDanger = LONG_LONG_MAX;
    long long minCost = LONG_LONG_MAX;

    // Find the maximum building height to limit our search for the bridge height.
    long long maxHeight = *max_element(S, S + N);

    // Iterate over each possible bridge height from 0 to maxHeight.
    for (long long height = 0; height <= maxHeight; height++) {
        long long danger = 0;
        long long cost = 0;

        // Calculate danger and cost for the current height.
        for (int i = 0; i < N; i++) {
            if (S[i] < height) {
                // Danger: sum of (height - S[i]) for buildings shorter than the bridge.
                danger += (height - S[i]);
            } else {
                // Cost: sum of (S[i] - height) for buildings taller than the bridge.
                cost += (S[i] - height);
            }
        }

        // If the cost exceeds the budget B, skip this height.
        if (cost > B) {
            continue;
        }

        // Check if this height provides a better solution (minimizing danger, then cost).
        if (danger < minDanger || (danger == minDanger && cost < minCost)) {
            minDanger = danger;
            minCost = cost;
            bestHeight = height;
        }
    }

    return bestHeight;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int B, N;
        cin >> B >> N;
        long long S[N];
        for (int j = 0; j < N; j++) {
            cin >> S[j];
        }
        cout << solve(B, N, S) << '\n';
    }
}
