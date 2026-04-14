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
    string a,b; 
    cin>>a>>b;

    reverse(a.begin(), a.end());
    cout<<(a==b?"YES":"NO");
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
    return 0;
}