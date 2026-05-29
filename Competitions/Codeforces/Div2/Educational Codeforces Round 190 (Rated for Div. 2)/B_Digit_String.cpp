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

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int fours = 0;

    f(i,n){
        if(s[i] == '4'){
            fours++;
        }
    }

    int removables = fours;

    vector<int> prefixOdds(n+1);

    for(ll i = 1; i <= n; ++i){
       prefixOdds[i] = prefixOdds[i-1] + (s[i-1] == '1' || s[i-1] == '3' ? 1 : 0 );
    }

    vector<int> suffixEvens(n+1);

    for(int i=n-1;i>=0;i--){
       suffixEvens[i] = suffixEvens[i+1] + (s[i] == '2');
    }

    int best = INT_MAX;

    for(ll i = 0; i <= n; ++i){
       best = min(best,prefixOdds[i] + suffixEvens[i]);
    }

    removables += best;

    cout << removables << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}