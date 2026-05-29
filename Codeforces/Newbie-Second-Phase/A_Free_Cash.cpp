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
    
    map<pair<int, int>, int> freq;
    int max_count = 0;
    
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        
        freq[{h, m}]++;
        max_count = max(max_count, freq[{h, m}]);
    }
    
    cout << max_count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     solve();
    return 0;
}