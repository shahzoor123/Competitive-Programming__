#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/


long long digitSum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;  // take last digit
        n /= 10;        // remove last digit
    }
    return sum;
}


void solve() {
    int x;
    cin >> x;
    
    int count = 0;
    for (long long y = x; y <= x + 100; y++) {
        if (y - digitSum(y) == x) count++;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}