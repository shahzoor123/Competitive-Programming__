#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
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

const int INF = 1e9;

int solve() {
    int n;
    cin >> n;
    
    string row1, row2;
    cin >> row1 >> row2;
    
    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        int cost_vertical = (row1[i-1] != row2[i-1]);
        dp[i] = min(dp[i], dp[i-1] + cost_vertical);
        
        if (i >= 2) {
            int cost_horizontal = 0;
            if (row1[i-2] != row1[i-1]) cost_horizontal++;
            if (row2[i-2] != row2[i-1]) cost_horizontal++;
            dp[i] = min(dp[i], dp[i-2] + cost_horizontal);
        }
    }
    
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}