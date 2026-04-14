#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> prices(n);
        for (int i = 0; i < n; ++i) cin >> prices[i];
        vector<int> vouchers(k);
        for (int i = 0; i < k; ++i) cin >> vouchers[i];

        sort(prices.begin(), prices.end(), greater<long long>()); 
        sort(vouchers.begin(), vouchers.end());                        

        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; ++i) pref[i+1] = pref[i] + prices[i];

        long long minCost = 0;
        int index = 0;

        for (int size : vouchers) {
            if (index >= n) break;         
            if (size == 1) {
             
                index += 1;
            } else {
             
                if (index + size <= n) {
                    minCost += pref[index + size - 1] - pref[index];
                    index += size;
                } else {
                    continue;
                }
            }
        }
        if (index < n) minCost += (pref[n] - pref[index]);
        cout << minCost << '\n';
    }
    return 0;
}
