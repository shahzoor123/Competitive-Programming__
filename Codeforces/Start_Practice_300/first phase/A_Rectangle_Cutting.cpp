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
    int a, b;
    cin >> a >> b;

    if(((a*b)%2==0)&&((a%2==0)&&(a/2!=b))||((b%2==0)&&(b/2!=a))) cout<<"YES" << endl;
    else cout<<"No" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}