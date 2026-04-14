#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        
        // Maximum reach: from max(1, k-m) to min(n, k+m)
        long long left = max(1LL, k - m);
        long long right = min(n, k + m);
        
        // But we're also limited by number of soldiers (m+1)
        long long max_by_distance = right - left + 1;
        long long max_by_soldiers = m + 1;
        
        long long answer = min(max_by_distance, max_by_soldiers);
        
        cout << answer << "\n";
    }
    
    return 0;
}