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
    int a, b, c;
    cin >> a >> b >> c;

    int one = a + b + c;
    int two = a*b*c;
    int three = (a+b) * c;
    int four = a * (b+c);

    cout << max({one,two,three,four}) << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}