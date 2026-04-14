#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<long long> a(n), b(n);
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < n; i++) cin >> b[i];



    long long maxSum = 0;
    for(long long i = 0; i < n; i++) {
        long long cumulativeOrA = 0, cumulativeOrB = 0;
        for(long long j = i; j < n; j++) {
           cumulativeOrA |= a[j];
           cumulativeOrB |= b[j];
           maxSum = max(maxSum, cumulativeOrA + cumulativeOrB);         
        }
    }

    cout << maxSum << endl;
}

int main() {
    solve();
    return 0;
}
