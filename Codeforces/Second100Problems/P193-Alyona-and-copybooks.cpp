#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

long long minCost(long long n, long long a, long long b, long long c) {
    long long remainder = (4 - (n % 4)) % 4;
    if (remainder == 0) {
        return 0;
    }

    long long min_rubles = LLONG_MAX;

    // We need to consider buying up to 4 packs to cover all possible combinations
    for (int i = 0; i <= 4; ++i) {
        for (int j = 0; j <= 4; ++j) {
            for (int k = 0; k <= 4; ++k) {
                if ((i + 2 * j + 3 * k) % 4 == remainder) {
                    long long cost = i * a + j * b + k * c;
                    if (cost < min_rubles) {
                        min_rubles = cost;
                    }
                }
            }
        }
    }

    return min_rubles;
}

int main() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long result = minCost(n, a, b, c);
    cout << result << endl;

    return 0;
}