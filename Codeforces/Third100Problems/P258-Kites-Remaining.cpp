#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

long long minOperationsToKite(vector<int>& sticks) {
    sort(sticks.begin(), sticks.end());
    long long minOps = LLONG_MAX;
    int n = sticks.size();
    
    // Case 1: All four sticks are adjusted to the same value (a, a, a, a)
    // We can choose any four sticks, but the optimal is the middle ones
    // For example, adjust first two to third and fourth to third
    long long case1 = 0;
    int target1 = sticks[n/2];
    for (int i = 0; i < 4; ++i) {
        case1 += abs(target1 - sticks[i]);
    }
    minOps = min(minOps, case1);
    
    // Case 2: Two pairs (a, a, b, b)
    // Choose two pairs from the sorted array, the minimal would be adjusting first two to third and fourth to fifth
    long long case2 = 0;
    int a = sticks[1];
    int b = sticks[3];
    case2 += abs(a - sticks[0]) + abs(a - sticks[1]);
    case2 += abs(b - sticks[2]) + abs(b - sticks[3]);
    minOps = min(minOps, case2);
    
    // Case 3: Another possible two pairs (a, a, b, b)
    // For example, first and third adjusted to second, and fourth adjusted to fifth
    long long case3 = 0;
    a = sticks[1];
    b = sticks[3];
    case3 += abs(a - sticks[0]) + abs(a - sticks[1]);
    case3 += abs(b - sticks[2]) + abs(b - sticks[3]);
    minOps = min(minOps, case3);
    
    // Case 4: Another combination for two pairs
    a = sticks[2];
    b = sticks[3];
    long long case4 = 0;
    case4 += abs(a - sticks[0]) + abs(a - sticks[1]);
    case4 += abs(b - sticks[2]) + abs(b - sticks[3]);
    minOps = min(minOps, case4);
    
    return minOps;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> sticks(N);
        for (int i = 0; i < N; ++i) {
            cin >> sticks[i];
        }
        cout << minOperationsToKite(sticks) << '\n';
    }
    return 0;
}