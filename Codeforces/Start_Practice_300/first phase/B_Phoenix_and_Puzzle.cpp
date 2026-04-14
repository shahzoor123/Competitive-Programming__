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

int isPerfectSquare(int x){
    int r = sqrt(x);
    return r*r == x;
}

void solve() {
    int n;
    cin >> n;

    if(n % 2 == 0 && isPerfectSquare(n/2) || n % 4 == 0 && isPerfectSquare(n/4)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}