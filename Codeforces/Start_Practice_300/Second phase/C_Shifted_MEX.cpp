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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    long long result = 0;


    for (int j = 0; j < n; j++) {
        long long base = a[j];
        long long need = 0;

        for (int i = j; i < n; i++) {
            long long val = a[i] - base;

            if (val == need) {
                need++;
            }
        }

        result = max(result, need);
    }

    cout << result << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}