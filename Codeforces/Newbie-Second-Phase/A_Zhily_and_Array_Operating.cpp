#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout << endl
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

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), prefixSum(n+1, 0);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        prefixSum[i+1] = prefixSum[i] + a[i];
    }

    long long maxPrefix = prefixSum[n];
    int maxPos = 0;

    for(int i = n-1; i >= 0; i--){
        if(maxPrefix > prefixSum[i]){
            maxPos++;
        }
        maxPrefix = max(maxPrefix, prefixSum[i]);
    }

    cout << maxPos << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}