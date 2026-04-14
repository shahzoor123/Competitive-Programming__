#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<string> strips(k);
        for (int i = 0; i < k; i++) {
            cin >> strips[i];
        }

        // For each position, store a bitmask of letters present
        vector<int> mask(n, 0);

        for (int col = 0; col < n; col++) {
            int bitmask = 0;
            for (int row = 0; row < k; row++) {
                bitmask |= (1 << (strips[row][col] - 'a'));
            }
            mask[col] = bitmask;
        }

        // Get all divisors of n
        vector<int> divisors;
        for (int d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                divisors.push_back(d);
                if (d * d != n)
                    divisors.push_back(n / d);
            }
        }

        sort(divisors.begin(), divisors.end());

        string answer;

        for (int d : divisors) {
            bool possible = true;
            vector<char> base(d);

            for (int i = 0; i < d; i++) {
                int common = (1 << 26) - 1;

                for (int pos = i; pos < n; pos += d) {
                    common &= mask[pos];
                }

                if (common == 0) {
                    possible = false;
                    break;
                }

                // Pick the smallest letter available
                for (int c = 0; c < 26; c++) {
                    if (common & (1 << c)) {
                        base[i] = char('a' + c);
                        break;
                    }
                }
            }

            if (possible) {
                answer.resize(n);
                for (int i = 0; i < n; i++) {
                    answer[i] = base[i % d];
                }
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
