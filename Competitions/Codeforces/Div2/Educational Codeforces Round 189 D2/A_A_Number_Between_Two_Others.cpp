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
    ll x, y;
    cin >> x >> y;

    for (ll z = 2 * x; z < y; z += x){
        if(z > x && z < y){
            if(z % x == 0){
                if(z % y != 0){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }

    cout << "NO" << endl;


   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}