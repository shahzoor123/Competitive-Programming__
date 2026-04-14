#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

/**
 * Function to calculate the optimal height for building the bridge.
 *
 * B: the maximum cost allowed
 * N: the number of buildings
 * S: an array of building heights
 */
long long solve(long long B, int N, long long S[]) {
    // Sort the building heights
    sort(S, S + N);

    // Calculate the prefix sum of heights
    vector<long long> prefixSum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefixSum[i + 1] = prefixSum[i] + S[i];
    }

    long long minDanger = LLONG_MAX;
    long long minCost = LLONG_MAX;
    long long bestHeight = -1;

    long long totalCost = 0, totalDanger = 0;
    int countLower = 0, countHigher = N;

    // Iterate over each building height and calculate the optimal bridge height
    for (int i = 0; i < N; i++) {
        long long height = S[i];

        // Cost calculation for height 'height'
        long long danger = height * countLower - prefixSum[countLower];
        long long cost = prefixSum[N] - prefixSum[countLower] - height * countHigher;

        // If the cost is within budget
        if (cost <= B) {
            // Update the optimal answer if we found a better one
            if (danger < minDanger || (danger == minDanger && cost < minCost)) {
                minDanger = danger;
                minCost = cost;
                bestHeight = height;
            }
        }

        // Update the counters for lower and higher buildings
        countLower++;
        countHigher--;
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
